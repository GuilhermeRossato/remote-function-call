#include "rfc_shared.h"

int rfc_validate_buffer_for_function_node(unsigned char * buffer, unsigned int buffer_size, func_node_type * node) {
	if (buffer == 0 || node == 0) {
		return rfc_error_invalid_something("validation parameters");
	}
	int types[6];
	int counts[6];
	void * ptr[6];
	int ptr_id = 0;
	int index = 0;
	int state = 0;
	char error_message[70];

	int buffer_size_aux = *((int *) buffer);
	if (buffer_size_aux != buffer_size) {
		snprintf(error_message, 69, "buffer size mismatch at validate buffer (expected %d, got %d)", buffer_size_aux, buffer_size - sizeof(int));
		return rfc_error_invalid_something(error_message);
	}
	index += sizeof(int);

	while (index < buffer_size && ptr_id < 6) {
		if (state == 0) {
			types[ptr_id] = *((int *) &buffer[index]);
			if (types[ptr_id] != RFC_INT && types[ptr_id] != RFC_CHAR && types[ptr_id] != RFC_CHAR_ARRAY && types[ptr_id] != RFC_INT_ARRAY) {
				snprintf(error_message, 70, "parameter type at parameter %d (%d)", ptr_id, types[ptr_id]);
				return rfc_error_invalid_something(error_message);
			}
			index += sizeof(int);
			state = 1;
		} else if (state == 1) {
			counts[ptr_id] = *((int *) &buffer[index]);
			if (counts[ptr_id] != 0 && (types[ptr_id] == RFC_INT || types[ptr_id] == RFC_CHAR)) {
				snprintf(error_message, 64, "parameter count at parameter %d", ptr_id);
				return rfc_error_invalid_something(error_message);
			}
			index += sizeof(int);
			state = 2;
		} else if (state == 2) {
			if (types[ptr_id] == RFC_INT) {
				ptr[ptr_id] = (void *) &buffer[index];
				index += sizeof(int);
				ptr_id++;
				state = 0;
			} else if (types[ptr_id] == RFC_CHAR) {
				ptr[ptr_id] = (void *) &buffer[index];
				index += sizeof(char);
				ptr_id++;
				state = 0;
			} else if (types[ptr_id] == RFC_INT_ARRAY) {
				ptr[ptr_id] = (void *) &buffer[index];
				index += sizeof(int) * counts[ptr_id];
				ptr_id++;
				state = 0;
			} else if (types[ptr_id] == RFC_CHAR_ARRAY) {
				ptr[ptr_id] = (void *) &buffer[index];
				index += sizeof(char) * counts[ptr_id];
				ptr_id++;
				state = 0;
			} else {
				snprintf(error_message, 64, "type id at parameter %d", ptr_id);
				return rfc_error_unimplemented(error_message);
			}
		} else {
			return rfc_error_invalid_something("state at function dereference");
		}
	}
	if (ptr_id > 4) {
		return rfc_error_unimplemented("too many parameters at validate buffer");
	}

	enum rfc_input_type i = node->input_type;

	if (i == rfc_unknown) {
		return rfc_error_invalid_something("function type at validate buffer");
	} else if (i == rfc_void) {
		if (ptr_id == 0) {
			return 1;
		} else {
			return rfc_error_invalid_something("function does not need parameters");
		}
	}

	for (index = 0; index < ptr_id; index ++) {
		int mask =   0x000000f0 << (index*4);

		int c_int =   0x00000010 << (index*4);
		int c_inta =  0x00000020 << (index*4);
		int c_char =  0x00000030 << (index*4);
		int c_chara = 0x00000040 << (index*4);

		if ((i & mask) == c_int) {
			if (types[index] != RFC_INT) {
				return rfc_error_mismatched_parameter("validate_buffer", "type", RFC_INT, types[index], index);
			} else if (counts[index] != 0) {
				return rfc_error_mismatched_parameter("validate_buffer", "count", 0, counts[index], index);
			}
		} else if ((i & mask) == c_char) {
			if (types[index] != RFC_CHAR) {
				return rfc_error_mismatched_parameter("validate_buffer", "type", RFC_CHAR, types[index], index);
			} else if (counts[index] != 0) {
				return rfc_error_mismatched_parameter("validate_buffer", "count", 0, counts[index], index);
			}
		} else if ((i & mask) == c_inta && types[index] != RFC_INT_ARRAY) {
			return rfc_error_mismatched_parameter("validate_buffer", "type", RFC_INT_ARRAY, types[index], index);
		} else if ((i & mask) == c_chara && types[index] != RFC_CHAR_ARRAY) {
			return rfc_error_mismatched_parameter("validate_buffer", "type", RFC_CHAR_ARRAY, types[index], index);
		}
	}
	return 1;
}