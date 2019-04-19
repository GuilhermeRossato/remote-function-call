#include "rfc_shared.h"
#include "rfc_fill_connection_data_from_string.c"
#include "rfc_is_valid_function_name.c"
#include "rfc_decode_type_desc.c"
#include "rfc_get_buffer_size.c"
#include "rfc_build_buffer.c"
#include "rfc_call_exposed_function.c"
#include <malloc.h>

#define rfc_call(...) _rfc_internal_call_function(__VA_ARGS__, 0, 0)

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

	char pointer_checker[3];
	while (1) {
		if (state == 0) {
			last_type_string = va_arg(ap, char *);
			if (last_type_string == 0 || last_type_string == (char *) 0) {
				break;
			}
			snprintf(pointer_checker, 3, "%d", last_type_string);
			if (pointer_checker[0] == '0' && pointer_checker[1] == '\0') {
				// This happens more often than you'd believe
				// printf("(%d==%d) results in %d\n", 0, last_type_string, last_type_string == 0);
				// The above print statement prints "(0==0) results in 0"
				break;
			}
			if (*last_type_string == '\0') {
				break;
			}
			state = 1;
		} else if (state == 1) {
			last_type_id = rfc_decode_type_desc(last_type_string);
			if (last_type_id == RFC_CHAR_ARRAY || last_type_id == RFC_INT_ARRAY) {
				last_data = (void *) va_arg(ap, void *);
				state = 2;
			} else if (last_type_id == RFC_INT || last_type_id == RFC_CHAR) {
				last_param_node = _rfc_malloc_to_param_info(last_param_node, last_type_id, 0, (void *) 0);
				last_param_node->data = (void *) malloc(sizeof(int));
				last_param_node->is_data_allocated = 1;
				*((int *)last_param_node->data) = va_arg(ap, int);
				state = 0;
			}
		} else if (state == 2) {
			if (last_type_id == RFC_INT_ARRAY || last_type_id == RFC_CHAR_ARRAY) {
				last_length = va_arg(ap, int);
				last_param_node = _rfc_malloc_to_param_info(last_param_node, last_type_id, last_length, last_data);
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
	int return_value = rfc_build_buffer(&root, buffer, buffer_length);

	if (!return_value) {
		return return_value;
	}

	return_value = rfc_call_exposed_function(function_name, buffer, buffer_length);
	_rfc_free_param_info(&root);
	free(buffer);
	va_end(ap);
	return return_value;
}

rfc_parameter_info * _rfc_malloc_to_param_info(rfc_parameter_info * last, RFC_PARAMTYPE_TYPE type, RFC_PARAMSIZE_TYPE count, void * data) {
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
	node->is_data_allocated = 0;
	return node;
}

int _rfc_free_param_info(rfc_parameter_info * root) {
	rfc_parameter_info * node = root;
	rfc_parameter_info * next;
	if (node == 0 || node->next == 0) {
		return 0;
	}
	if (node->is_data_allocated != 0){
		free(node->data);
	}
	node = node->next;
	do {
		next = node->next;
		if (node != 0) {
			if (node->is_data_allocated != 0){
				free(node->data);
			}
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