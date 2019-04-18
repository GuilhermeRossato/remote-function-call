/**
 * This file was generated automatically by the command "npm run generate-dereference-call".
 * Refrain from changing it manually.
 */

#include "rfc_shared.h"

int rfc_dereference_function_call(void * func, enum rfc_input_type i, unsigned char * buffer, unsigned int buffer_size) {
	int header_size = sizeof(int) * 2;
	void * helper = buffer;
	int * int_aux = helper;
	char * char_aux = helper;

	int types[6];
	int counts[6];
	void * ptr[6];
	int ptr_id = 0;
	int index = 0;
	int state = 0;
	while (index < buffer_size && ptr_id < 6) {
		if (state == 0) {
			types[ptr_id] = *((int *) &buffer[index]);
			index += sizeof(int);
			state = 1;
		} else if (state == 1) {
			counts[ptr_id] = *((int *) &buffer[index]);
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
				return rfc_error_unimplemented("type id at function dereference");
			}
		} else {
			return rfc_error_invalid_something("state at function dereference");
		}
	}
		if (i == rfc_void) {
		int (*callback)();
		callback = func;
		return callback();
	} else if (i == rfc_int) {
		int (*callback)(int);
		callback = func;
		return callback(
			*((int *) ptr[0])
		);
	} else if (i == rfc_int_int) {
		int (*callback)(int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1])
		);
	} else if (i == rfc_int_int_int) {
		int (*callback)(int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2])
		);
	} else if (i == rfc_int_int_int_int) {
		int (*callback)(int, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3])
		);
	} else if (i == rfc_int_int_int_inta) {
		int (*callback)(int, int, int, int*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_int_int_int_char) {
		int (*callback)(int, int, int, char);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3])
		);
	} else if (i == rfc_int_int_int_chara) {
		int (*callback)(int, int, int, char*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_int_int_inta) {
		int (*callback)(int, int, int*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			counts[2]
		);
	} else if (i == rfc_int_int_inta_int) {
		int (*callback)(int, int, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_int_int_inta_inta) {
		int (*callback)(int, int, int*, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_int_inta_char) {
		int (*callback)(int, int, int*, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_int_int_inta_chara) {
		int (*callback)(int, int, int*, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_int_char) {
		int (*callback)(int, int, char);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2])
		);
	} else if (i == rfc_int_int_char_int) {
		int (*callback)(int, int, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3])
		);
	} else if (i == rfc_int_int_char_inta) {
		int (*callback)(int, int, char, int*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_int_int_char_char) {
		int (*callback)(int, int, char, char);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3])
		);
	} else if (i == rfc_int_int_char_chara) {
		int (*callback)(int, int, char, char*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_int_int_chara) {
		int (*callback)(int, int, char*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			counts[2]
		);
	} else if (i == rfc_int_int_chara_int) {
		int (*callback)(int, int, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_int_int_chara_inta) {
		int (*callback)(int, int, char*, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_int_chara_char) {
		int (*callback)(int, int, char*, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_int_int_chara_chara) {
		int (*callback)(int, int, char*, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_inta) {
		int (*callback)(int, int*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			counts[1]
		);
	} else if (i == rfc_int_inta_int) {
		int (*callback)(int, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			counts[1]
		);
	} else if (i == rfc_int_inta_int_int) {
		int (*callback)(int, int*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_int_inta_int_inta) {
		int (*callback)(int, int*, int, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_int_inta_int_char) {
		int (*callback)(int, int*, int, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_int_inta_int_chara) {
		int (*callback)(int, int*, int, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_int_inta_inta) {
		int (*callback)(int, int*, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_inta_inta_int) {
		int (*callback)(int, int*, int*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_inta_inta_inta) {
		int (*callback)(int, int*, int*, int*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_inta_inta_char) {
		int (*callback)(int, int*, int*, char, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_inta_inta_chara) {
		int (*callback)(int, int*, int*, char*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_inta_char) {
		int (*callback)(int, int*, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			counts[1]
		);
	} else if (i == rfc_int_inta_char_int) {
		int (*callback)(int, int*, char, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_int_inta_char_inta) {
		int (*callback)(int, int*, char, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_int_inta_char_char) {
		int (*callback)(int, int*, char, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_int_inta_char_chara) {
		int (*callback)(int, int*, char, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_int_inta_chara) {
		int (*callback)(int, int*, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_inta_chara_int) {
		int (*callback)(int, int*, char*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_inta_chara_inta) {
		int (*callback)(int, int*, char*, int*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_inta_chara_char) {
		int (*callback)(int, int*, char*, char, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_inta_chara_chara) {
		int (*callback)(int, int*, char*, char*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_char) {
		int (*callback)(int, char);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1])
		);
	} else if (i == rfc_int_char_int) {
		int (*callback)(int, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2])
		);
	} else if (i == rfc_int_char_int_int) {
		int (*callback)(int, char, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3])
		);
	} else if (i == rfc_int_char_int_inta) {
		int (*callback)(int, char, int, int*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_int_char_int_char) {
		int (*callback)(int, char, int, char);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3])
		);
	} else if (i == rfc_int_char_int_chara) {
		int (*callback)(int, char, int, char*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_int_char_inta) {
		int (*callback)(int, char, int*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			counts[2]
		);
	} else if (i == rfc_int_char_inta_int) {
		int (*callback)(int, char, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_int_char_inta_inta) {
		int (*callback)(int, char, int*, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_char_inta_char) {
		int (*callback)(int, char, int*, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_int_char_inta_chara) {
		int (*callback)(int, char, int*, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_char_char) {
		int (*callback)(int, char, char);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2])
		);
	} else if (i == rfc_int_char_char_int) {
		int (*callback)(int, char, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3])
		);
	} else if (i == rfc_int_char_char_inta) {
		int (*callback)(int, char, char, int*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_int_char_char_char) {
		int (*callback)(int, char, char, char);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3])
		);
	} else if (i == rfc_int_char_char_chara) {
		int (*callback)(int, char, char, char*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_int_char_chara) {
		int (*callback)(int, char, char*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			counts[2]
		);
	} else if (i == rfc_int_char_chara_int) {
		int (*callback)(int, char, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_int_char_chara_inta) {
		int (*callback)(int, char, char*, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_char_chara_char) {
		int (*callback)(int, char, char*, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_int_char_chara_chara) {
		int (*callback)(int, char, char*, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_chara) {
		int (*callback)(int, char*, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			counts[1]
		);
	} else if (i == rfc_int_chara_int) {
		int (*callback)(int, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			counts[1]
		);
	} else if (i == rfc_int_chara_int_int) {
		int (*callback)(int, char*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_int_chara_int_inta) {
		int (*callback)(int, char*, int, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_int_chara_int_char) {
		int (*callback)(int, char*, int, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_int_chara_int_chara) {
		int (*callback)(int, char*, int, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_int_chara_inta) {
		int (*callback)(int, char*, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_chara_inta_int) {
		int (*callback)(int, char*, int*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_chara_inta_inta) {
		int (*callback)(int, char*, int*, int*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_chara_inta_char) {
		int (*callback)(int, char*, int*, char, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_chara_inta_chara) {
		int (*callback)(int, char*, int*, char*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_chara_char) {
		int (*callback)(int, char*, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			counts[1]
		);
	} else if (i == rfc_int_chara_char_int) {
		int (*callback)(int, char*, char, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_int_chara_char_inta) {
		int (*callback)(int, char*, char, int*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_int_chara_char_char) {
		int (*callback)(int, char*, char, char, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_int_chara_char_chara) {
		int (*callback)(int, char*, char, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_int_chara_chara) {
		int (*callback)(int, char*, char*, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_chara_chara_int) {
		int (*callback)(int, char*, char*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_chara_chara_inta) {
		int (*callback)(int, char*, char*, int*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_int_chara_chara_char) {
		int (*callback)(int, char*, char*, char, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_int_chara_chara_chara) {
		int (*callback)(int, char*, char*, char*, int, int, int);
		callback = func;
		return callback(
			*((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta) {
		int (*callback)(int*, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			counts[0]
		);
	} else if (i == rfc_inta_int) {
		int (*callback)(int*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			counts[0]
		);
	} else if (i == rfc_inta_int_int) {
		int (*callback)(int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			counts[0]
		);
	} else if (i == rfc_inta_int_int_int) {
		int (*callback)(int*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_inta_int_int_inta) {
		int (*callback)(int*, int, int, int*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_inta_int_int_char) {
		int (*callback)(int*, int, int, char, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_inta_int_int_chara) {
		int (*callback)(int*, int, int, char*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_inta_int_inta) {
		int (*callback)(int*, int, int*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_int_inta_int) {
		int (*callback)(int*, int, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_int_inta_inta) {
		int (*callback)(int*, int, int*, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_int_inta_char) {
		int (*callback)(int*, int, int*, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_int_inta_chara) {
		int (*callback)(int*, int, int*, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_int_char) {
		int (*callback)(int*, int, char, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			counts[0]
		);
	} else if (i == rfc_inta_int_char_int) {
		int (*callback)(int*, int, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_inta_int_char_inta) {
		int (*callback)(int*, int, char, int*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_inta_int_char_char) {
		int (*callback)(int*, int, char, char, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_inta_int_char_chara) {
		int (*callback)(int*, int, char, char*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_inta_int_chara) {
		int (*callback)(int*, int, char*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_int_chara_int) {
		int (*callback)(int*, int, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_int_chara_inta) {
		int (*callback)(int*, int, char*, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_int_chara_char) {
		int (*callback)(int*, int, char*, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_int_chara_chara) {
		int (*callback)(int*, int, char*, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_inta) {
		int (*callback)(int*, int*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_inta_int) {
		int (*callback)(int*, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_inta_int_int) {
		int (*callback)(int*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_inta_int_inta) {
		int (*callback)(int*, int*, int, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_inta_inta_int_char) {
		int (*callback)(int*, int*, int, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_inta_int_chara) {
		int (*callback)(int*, int*, int, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_inta_inta_inta) {
		int (*callback)(int*, int*, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_inta_inta_int) {
		int (*callback)(int*, int*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_inta_inta_inta) {
		int (*callback)(int*, int*, int*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_inta_inta_char) {
		int (*callback)(int*, int*, int*, char, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_inta_inta_chara) {
		int (*callback)(int*, int*, int*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_inta_char) {
		int (*callback)(int*, int*, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_inta_char_int) {
		int (*callback)(int*, int*, char, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_inta_char_inta) {
		int (*callback)(int*, int*, char, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_inta_inta_char_char) {
		int (*callback)(int*, int*, char, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_inta_char_chara) {
		int (*callback)(int*, int*, char, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_inta_inta_chara) {
		int (*callback)(int*, int*, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_inta_chara_int) {
		int (*callback)(int*, int*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_inta_chara_inta) {
		int (*callback)(int*, int*, char*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_inta_chara_char) {
		int (*callback)(int*, int*, char*, char, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_inta_chara_chara) {
		int (*callback)(int*, int*, char*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_char) {
		int (*callback)(int*, char, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			counts[0]
		);
	} else if (i == rfc_inta_char_int) {
		int (*callback)(int*, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			counts[0]
		);
	} else if (i == rfc_inta_char_int_int) {
		int (*callback)(int*, char, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_inta_char_int_inta) {
		int (*callback)(int*, char, int, int*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_inta_char_int_char) {
		int (*callback)(int*, char, int, char, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_inta_char_int_chara) {
		int (*callback)(int*, char, int, char*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_inta_char_inta) {
		int (*callback)(int*, char, int*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_char_inta_int) {
		int (*callback)(int*, char, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_char_inta_inta) {
		int (*callback)(int*, char, int*, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_char_inta_char) {
		int (*callback)(int*, char, int*, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_char_inta_chara) {
		int (*callback)(int*, char, int*, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_char_char) {
		int (*callback)(int*, char, char, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			counts[0]
		);
	} else if (i == rfc_inta_char_char_int) {
		int (*callback)(int*, char, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_inta_char_char_inta) {
		int (*callback)(int*, char, char, int*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_inta_char_char_char) {
		int (*callback)(int*, char, char, char, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_inta_char_char_chara) {
		int (*callback)(int*, char, char, char*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_inta_char_chara) {
		int (*callback)(int*, char, char*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_char_chara_int) {
		int (*callback)(int*, char, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_char_chara_inta) {
		int (*callback)(int*, char, char*, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_char_chara_char) {
		int (*callback)(int*, char, char*, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_inta_char_chara_chara) {
		int (*callback)(int*, char, char*, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_chara) {
		int (*callback)(int*, char*, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_chara_int) {
		int (*callback)(int*, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_chara_int_int) {
		int (*callback)(int*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_chara_int_inta) {
		int (*callback)(int*, char*, int, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_inta_chara_int_char) {
		int (*callback)(int*, char*, int, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_chara_int_chara) {
		int (*callback)(int*, char*, int, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_inta_chara_inta) {
		int (*callback)(int*, char*, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_chara_inta_int) {
		int (*callback)(int*, char*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_chara_inta_inta) {
		int (*callback)(int*, char*, int*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_chara_inta_char) {
		int (*callback)(int*, char*, int*, char, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_chara_inta_chara) {
		int (*callback)(int*, char*, int*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_chara_char) {
		int (*callback)(int*, char*, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_chara_char_int) {
		int (*callback)(int*, char*, char, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_chara_char_inta) {
		int (*callback)(int*, char*, char, int*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_inta_chara_char_char) {
		int (*callback)(int*, char*, char, char, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_inta_chara_char_chara) {
		int (*callback)(int*, char*, char, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_inta_chara_chara) {
		int (*callback)(int*, char*, char*, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_chara_chara_int) {
		int (*callback)(int*, char*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_chara_chara_inta) {
		int (*callback)(int*, char*, char*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_inta_chara_chara_char) {
		int (*callback)(int*, char*, char*, char, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_inta_chara_chara_chara) {
		int (*callback)(int*, char*, char*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((int *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char) {
		int (*callback)(char);
		callback = func;
		return callback(
			*((char *) ptr[0])
		);
	} else if (i == rfc_char_int) {
		int (*callback)(char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1])
		);
	} else if (i == rfc_char_int_int) {
		int (*callback)(char, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2])
		);
	} else if (i == rfc_char_int_int_int) {
		int (*callback)(char, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3])
		);
	} else if (i == rfc_char_int_int_inta) {
		int (*callback)(char, int, int, int*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_char_int_int_char) {
		int (*callback)(char, int, int, char);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3])
		);
	} else if (i == rfc_char_int_int_chara) {
		int (*callback)(char, int, int, char*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_char_int_inta) {
		int (*callback)(char, int, int*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			counts[2]
		);
	} else if (i == rfc_char_int_inta_int) {
		int (*callback)(char, int, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_char_int_inta_inta) {
		int (*callback)(char, int, int*, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_int_inta_char) {
		int (*callback)(char, int, int*, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_char_int_inta_chara) {
		int (*callback)(char, int, int*, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_int_char) {
		int (*callback)(char, int, char);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2])
		);
	} else if (i == rfc_char_int_char_int) {
		int (*callback)(char, int, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3])
		);
	} else if (i == rfc_char_int_char_inta) {
		int (*callback)(char, int, char, int*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_char_int_char_char) {
		int (*callback)(char, int, char, char);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3])
		);
	} else if (i == rfc_char_int_char_chara) {
		int (*callback)(char, int, char, char*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_char_int_chara) {
		int (*callback)(char, int, char*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			counts[2]
		);
	} else if (i == rfc_char_int_chara_int) {
		int (*callback)(char, int, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_char_int_chara_inta) {
		int (*callback)(char, int, char*, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_int_chara_char) {
		int (*callback)(char, int, char*, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_char_int_chara_chara) {
		int (*callback)(char, int, char*, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_inta) {
		int (*callback)(char, int*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			counts[1]
		);
	} else if (i == rfc_char_inta_int) {
		int (*callback)(char, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			counts[1]
		);
	} else if (i == rfc_char_inta_int_int) {
		int (*callback)(char, int*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_char_inta_int_inta) {
		int (*callback)(char, int*, int, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_char_inta_int_char) {
		int (*callback)(char, int*, int, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_char_inta_int_chara) {
		int (*callback)(char, int*, int, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_char_inta_inta) {
		int (*callback)(char, int*, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_inta_inta_int) {
		int (*callback)(char, int*, int*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_inta_inta_inta) {
		int (*callback)(char, int*, int*, int*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_inta_inta_char) {
		int (*callback)(char, int*, int*, char, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_inta_inta_chara) {
		int (*callback)(char, int*, int*, char*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_inta_char) {
		int (*callback)(char, int*, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			counts[1]
		);
	} else if (i == rfc_char_inta_char_int) {
		int (*callback)(char, int*, char, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_char_inta_char_inta) {
		int (*callback)(char, int*, char, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_char_inta_char_char) {
		int (*callback)(char, int*, char, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_char_inta_char_chara) {
		int (*callback)(char, int*, char, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_char_inta_chara) {
		int (*callback)(char, int*, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_inta_chara_int) {
		int (*callback)(char, int*, char*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_inta_chara_inta) {
		int (*callback)(char, int*, char*, int*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_inta_chara_char) {
		int (*callback)(char, int*, char*, char, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_inta_chara_chara) {
		int (*callback)(char, int*, char*, char*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_char) {
		int (*callback)(char, char);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1])
		);
	} else if (i == rfc_char_char_int) {
		int (*callback)(char, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2])
		);
	} else if (i == rfc_char_char_int_int) {
		int (*callback)(char, char, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3])
		);
	} else if (i == rfc_char_char_int_inta) {
		int (*callback)(char, char, int, int*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_char_char_int_char) {
		int (*callback)(char, char, int, char);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3])
		);
	} else if (i == rfc_char_char_int_chara) {
		int (*callback)(char, char, int, char*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_char_char_inta) {
		int (*callback)(char, char, int*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			counts[2]
		);
	} else if (i == rfc_char_char_inta_int) {
		int (*callback)(char, char, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_char_char_inta_inta) {
		int (*callback)(char, char, int*, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_char_inta_char) {
		int (*callback)(char, char, int*, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_char_char_inta_chara) {
		int (*callback)(char, char, int*, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_char_char) {
		int (*callback)(char, char, char);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2])
		);
	} else if (i == rfc_char_char_char_int) {
		int (*callback)(char, char, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3])
		);
	} else if (i == rfc_char_char_char_inta) {
		int (*callback)(char, char, char, int*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_char_char_char_char) {
		int (*callback)(char, char, char, char);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3])
		);
	} else if (i == rfc_char_char_char_chara) {
		int (*callback)(char, char, char, char*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[3]
		);
	} else if (i == rfc_char_char_chara) {
		int (*callback)(char, char, char*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			counts[2]
		);
	} else if (i == rfc_char_char_chara_int) {
		int (*callback)(char, char, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_char_char_chara_inta) {
		int (*callback)(char, char, char*, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_char_chara_char) {
		int (*callback)(char, char, char*, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[2]
		);
	} else if (i == rfc_char_char_chara_chara) {
		int (*callback)(char, char, char*, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_chara) {
		int (*callback)(char, char*, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			counts[1]
		);
	} else if (i == rfc_char_chara_int) {
		int (*callback)(char, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			counts[1]
		);
	} else if (i == rfc_char_chara_int_int) {
		int (*callback)(char, char*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_char_chara_int_inta) {
		int (*callback)(char, char*, int, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_char_chara_int_char) {
		int (*callback)(char, char*, int, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_char_chara_int_chara) {
		int (*callback)(char, char*, int, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_char_chara_inta) {
		int (*callback)(char, char*, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_chara_inta_int) {
		int (*callback)(char, char*, int*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_chara_inta_inta) {
		int (*callback)(char, char*, int*, int*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_chara_inta_char) {
		int (*callback)(char, char*, int*, char, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_chara_inta_chara) {
		int (*callback)(char, char*, int*, char*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_chara_char) {
		int (*callback)(char, char*, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			counts[1]
		);
	} else if (i == rfc_char_chara_char_int) {
		int (*callback)(char, char*, char, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_char_chara_char_inta) {
		int (*callback)(char, char*, char, int*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_char_chara_char_char) {
		int (*callback)(char, char*, char, char, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[1]
		);
	} else if (i == rfc_char_chara_char_chara) {
		int (*callback)(char, char*, char, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[3]
		);
	} else if (i == rfc_char_chara_chara) {
		int (*callback)(char, char*, char*, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_chara_chara_int) {
		int (*callback)(char, char*, char*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_chara_chara_inta) {
		int (*callback)(char, char*, char*, int*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_char_chara_chara_char) {
		int (*callback)(char, char*, char*, char, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[1],
			counts[2]
		);
	} else if (i == rfc_char_chara_chara_chara) {
		int (*callback)(char, char*, char*, char*, int, int, int);
		callback = func;
		return callback(
			*((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara) {
		int (*callback)(char*, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			counts[0]
		);
	} else if (i == rfc_chara_int) {
		int (*callback)(char*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			counts[0]
		);
	} else if (i == rfc_chara_int_int) {
		int (*callback)(char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			counts[0]
		);
	} else if (i == rfc_chara_int_int_int) {
		int (*callback)(char*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_chara_int_int_inta) {
		int (*callback)(char*, int, int, int*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_chara_int_int_char) {
		int (*callback)(char*, int, int, char, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_chara_int_int_chara) {
		int (*callback)(char*, int, int, char*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_chara_int_inta) {
		int (*callback)(char*, int, int*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_int_inta_int) {
		int (*callback)(char*, int, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_int_inta_inta) {
		int (*callback)(char*, int, int*, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_int_inta_char) {
		int (*callback)(char*, int, int*, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_int_inta_chara) {
		int (*callback)(char*, int, int*, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_int_char) {
		int (*callback)(char*, int, char, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			counts[0]
		);
	} else if (i == rfc_chara_int_char_int) {
		int (*callback)(char*, int, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_chara_int_char_inta) {
		int (*callback)(char*, int, char, int*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_chara_int_char_char) {
		int (*callback)(char*, int, char, char, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_chara_int_char_chara) {
		int (*callback)(char*, int, char, char*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_chara_int_chara) {
		int (*callback)(char*, int, char*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_int_chara_int) {
		int (*callback)(char*, int, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_int_chara_inta) {
		int (*callback)(char*, int, char*, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_int_chara_char) {
		int (*callback)(char*, int, char*, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_int_chara_chara) {
		int (*callback)(char*, int, char*, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_inta) {
		int (*callback)(char*, int*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_inta_int) {
		int (*callback)(char*, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_inta_int_int) {
		int (*callback)(char*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_inta_int_inta) {
		int (*callback)(char*, int*, int, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_chara_inta_int_char) {
		int (*callback)(char*, int*, int, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_inta_int_chara) {
		int (*callback)(char*, int*, int, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_chara_inta_inta) {
		int (*callback)(char*, int*, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_inta_inta_int) {
		int (*callback)(char*, int*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_inta_inta_inta) {
		int (*callback)(char*, int*, int*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_inta_inta_char) {
		int (*callback)(char*, int*, int*, char, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_inta_inta_chara) {
		int (*callback)(char*, int*, int*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_inta_char) {
		int (*callback)(char*, int*, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_inta_char_int) {
		int (*callback)(char*, int*, char, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_inta_char_inta) {
		int (*callback)(char*, int*, char, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_chara_inta_char_char) {
		int (*callback)(char*, int*, char, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_inta_char_chara) {
		int (*callback)(char*, int*, char, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_chara_inta_chara) {
		int (*callback)(char*, int*, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_inta_chara_int) {
		int (*callback)(char*, int*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_inta_chara_inta) {
		int (*callback)(char*, int*, char*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_inta_chara_char) {
		int (*callback)(char*, int*, char*, char, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_inta_chara_chara) {
		int (*callback)(char*, int*, char*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((int *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_char) {
		int (*callback)(char*, char, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			counts[0]
		);
	} else if (i == rfc_chara_char_int) {
		int (*callback)(char*, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			counts[0]
		);
	} else if (i == rfc_chara_char_int_int) {
		int (*callback)(char*, char, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_chara_char_int_inta) {
		int (*callback)(char*, char, int, int*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_chara_char_int_char) {
		int (*callback)(char*, char, int, char, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_chara_char_int_chara) {
		int (*callback)(char*, char, int, char*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_chara_char_inta) {
		int (*callback)(char*, char, int*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_char_inta_int) {
		int (*callback)(char*, char, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_char_inta_inta) {
		int (*callback)(char*, char, int*, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_char_inta_char) {
		int (*callback)(char*, char, int*, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_char_inta_chara) {
		int (*callback)(char*, char, int*, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_char_char) {
		int (*callback)(char*, char, char, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			counts[0]
		);
	} else if (i == rfc_chara_char_char_int) {
		int (*callback)(char*, char, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_chara_char_char_inta) {
		int (*callback)(char*, char, char, int*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_chara_char_char_char) {
		int (*callback)(char*, char, char, char, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0]
		);
	} else if (i == rfc_chara_char_char_chara) {
		int (*callback)(char*, char, char, char*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[3]
		);
	} else if (i == rfc_chara_char_chara) {
		int (*callback)(char*, char, char*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_char_chara_int) {
		int (*callback)(char*, char, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_char_chara_inta) {
		int (*callback)(char*, char, char*, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_char_chara_char) {
		int (*callback)(char*, char, char*, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[2]
		);
	} else if (i == rfc_chara_char_chara_chara) {
		int (*callback)(char*, char, char*, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			*((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_chara) {
		int (*callback)(char*, char*, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_chara_int) {
		int (*callback)(char*, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_chara_int_int) {
		int (*callback)(char*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_chara_int_inta) {
		int (*callback)(char*, char*, int, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_chara_chara_int_char) {
		int (*callback)(char*, char*, int, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_chara_int_chara) {
		int (*callback)(char*, char*, int, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_chara_chara_inta) {
		int (*callback)(char*, char*, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_chara_inta_int) {
		int (*callback)(char*, char*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_chara_inta_inta) {
		int (*callback)(char*, char*, int*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_chara_inta_char) {
		int (*callback)(char*, char*, int*, char, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_chara_inta_chara) {
		int (*callback)(char*, char*, int*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((int *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_chara_char) {
		int (*callback)(char*, char*, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_chara_char_int) {
		int (*callback)(char*, char*, char, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_chara_char_inta) {
		int (*callback)(char*, char*, char, int*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_chara_chara_char_char) {
		int (*callback)(char*, char*, char, char, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1]
		);
	} else if (i == rfc_chara_chara_char_chara) {
		int (*callback)(char*, char*, char, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			*((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[3]
		);
	} else if (i == rfc_chara_chara_chara) {
		int (*callback)(char*, char*, char*, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_chara_chara_int) {
		int (*callback)(char*, char*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_chara_chara_inta) {
		int (*callback)(char*, char*, char*, int*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((int *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else if (i == rfc_chara_chara_chara_char) {
		int (*callback)(char*, char*, char*, char, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			*((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2]
		);
	} else if (i == rfc_chara_chara_chara_chara) {
		int (*callback)(char*, char*, char*, char*, int, int, int, int);
		callback = func;
		return callback(
			 ((char *) ptr[0]),
			 ((char *) ptr[1]),
			 ((char *) ptr[2]),
			 ((char *) ptr[3]),
			counts[0],
			counts[1],
			counts[2],
			counts[3]
		);
	} else {
		return rfc_error_insupported_something("input type on dereference function call", i);
	}	return 0;
}
