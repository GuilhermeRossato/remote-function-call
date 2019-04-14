#include "rfc_shared.h"
#include "rfc_fill_connection_data_from_string.c"
#include "rfc_is_valid_function_name.c"
#include "rfc_decode_type_desc.c"
#include "rfc_get_buffer_size.c"
#include "rfc_build_buffer.c"
#include "rfc_call_exposed_function.c"
#include <malloc.h>

#define rfc_call(...) _rfc_internal_call_function(__VA_ARGS__, 0)

rfc_parameter_info * _rfc_malloc_to_param_info(rfc_parameter_info * last, RFC_PARAMTYPE_TYPE type, RFC_PARAMSIZE_TYPE count, void * data);
int _rfc_free_param_info(rfc_parameter_info * root);

int _rfc_internal_call_function(char * connection_str, ...) {
	va_list ap;
	va_start(ap, connection_str);

	// Handle connection string, hostname and port.
	if (strnlen(connection_str, RFC_HOST_BUFFER_SIZE) >= RFC_HOST_BUFFER_SIZE-1) {
		va_end(ap);
		return rfc_error_invalid_something("connection string");
	}

	if (!rfc_compare_two_strings(connection_str, "internal", RFC_HOST_BUFFER_SIZE-1)) {
		va_end(ap);
		return rfc_error_unimplemented("connection string");
	}

	rfc_connection_data data;

	int successCode = rfc_fill_connection_data_from_string(connection_str, &data);
	if (!successCode) {
		va_end(ap);
		return successCode;
	}

	// Handle function name

	char * function_name = va_arg(ap, char *);

	if (!rfc_is_valid_function_name(function_name)) {
		va_end(ap);
		return rfc_error_invalid_something("function name");
	}

	//printf("connection str: %s\n", connection_str);
	//printf("host: %s\n", data.host);
	//printf("port: %d\n", data.port);
	//printf("function name: %s\n", function_name);

	rfc_parameter_info root;
	root.data = 0;
	root.next = 0;
	rfc_parameter_info * last_param_node = &root;

	// Buffer parameters
	int state = 0;
	char * last_type_string;
	int last_type_id;
	int last_length;
	char last_char;
	int last_int;
	void * last_data;

	int loop_index = 0;
	char checker[3];
	while (1) {
		loop_index++;
		if (loop_index > 32) {
			printf("RFC call error: too deep at state %d amount %d\n", state, loop_index);
			_rfc_free_param_info(&root);
			va_end(ap);
			return -1;
		}
		if (state == 0) {
			last_type_string = va_arg(ap, char *);
			if (last_type_string == 0 || last_type_string == (char *) 0) {
				break;
			}
			snprintf(checker, 3, "%d", last_type_string);
			if (checker[0] == '0' && checker[1] == '\0') {
				printf("rfc_call.c: Warning: this line should not be executed\n");
				break;
			}
			if (*last_type_string == '\0') {
				break;
			}
			state = 1;
		} else if (state == 1) {
			last_type_id = rfc_decode_type_desc(last_type_string);
			if (last_type_id == RFC_CHAR_ARRAY || last_type_id == RFC_INT_ARRAY) {
				last_length = va_arg(ap, int);
				state = 2;
			} else if (last_type_id == RFC_INT) {
				last_param_node = _rfc_malloc_to_param_info(last_param_node, last_type_id, 0, (void *) 0);
				last_param_node->data = (int *) malloc(sizeof(int));
				*((int *)last_param_node->data) = va_arg(ap, int);
				printf("added int %d\n", *((int *)last_param_node->data));
				state = 0;
			} else if (last_type_id == RFC_CHAR) {
				last_char = va_arg(ap, int);
				printf("added char %c\n", last_char);
				//last_param_node = _rfc_malloc_to_param_info(last_param_node, last_type_id, 0, va_arg(ap, char*));
				state = 0;
			}
		} else if (state == 2) {
			printf("added array with %d size\n", last_length);
			if (last_type_id == RFC_INT_ARRAY) {
				printf("added int ARRAY\n");
				last_data = (void *) va_arg(ap, int *);
				//last_param_node = _rfc_malloc_to_param_info(last_param_node, last_type_id, last_length, va_arg(ap, int*));
			} else if (last_type_id == RFC_CHAR_ARRAY) {
				printf("added char ARRAY\n");
				last_data = (void *) va_arg(ap, char *);
				//last_param_node = _rfc_malloc_to_param_info(last_param_node, last_type_id, last_length, va_arg(ap, char*));
			}
			state = 0;
		} else {
			printf("RFC call error: Unexpected state %d\n", state);
			_rfc_free_param_info(&root);
			va_end(ap);
			return 0;
		}
	}

	unsigned int buffer_length = rfc_get_buffer_size(&root);

	char * buffer = (char *) malloc(sizeof(char) * buffer_length);
	rfc_build_buffer(&root, buffer, buffer_length);
	//printf("attempting to call %s with parameter type %s\n", function_name, last_param_node->type == RFC_INT ? "INT":"CHAR");
	//printf("the buffer starts with %x %x %x %x\n", buffer[0], buffer[1], buffer[2], buffer[3]);
	int return_value = rfc_call_exposed_function(function_name, buffer);
	//int return_value = 1;
	//printf("call finished\n");
	_rfc_free_param_info(&root);
	free(buffer);
	va_end(ap);
	return return_value;
}

rfc_parameter_info * _rfc_malloc_to_param_info(rfc_parameter_info * last, RFC_PARAMTYPE_TYPE type, RFC_PARAMSIZE_TYPE count, void * data) {
	if (last->data == 0 && last->next == 0) {
		last->next = 0;
		last->type = type;
		last->count = count;
		last->data = data;
		return last;
	}
	rfc_parameter_info * node = last;

	while (node) {
		if (node->data == 0) {
			node->next = 0;
			break;
		}
		if (node->data == 0 || node->next == 0) {
			node->next = (rfc_parameter_info *) malloc(sizeof(rfc_parameter_info));
			node->next->data = 0;
		}
		node = node->next;
	}
	node->type = type;
	node->count = count;
	node->data = data;
	node->next = 0;
	return node;
}

int _rfc_free_param_info(rfc_parameter_info * root) {
	rfc_parameter_info * node = root;
	rfc_parameter_info * next;
	if (node == 0 || node->next == 0) {
		return 0;
	}
	node = node->next;
	do {
		next = node->next;
		if (node != 0) {
			free(node);
		}
		node = next;
	} while (node != 0);
	return 1;
}

/*

int my_local_function(int x, int y) {

}


resource = rfc_open();
rfc_exec(resource, 1, 2);
rfc_close(resource);


rfc_open("127.0.0.1", 8081);

rfc_call(resource, "my_local_function", RFC_INT, 1, RFC_INT, 3);

rfc_call("127.0.0.1", 8081, "my_local_function", RFC_INT, 1, RFC_INT, 2);
*/