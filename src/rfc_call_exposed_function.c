#include "rfc_shared.h"
#include "rfc_validate_buffer_for_function_node.c"

func_node_type * _rfc_find_exposed_function_by_name(char * name);

int rfc_call_exposed_function(char * name, unsigned char * input_buffer) {
	func_node_type * node = _rfc_find_exposed_function_by_name(name);
	if (node == 0) {
		return rfc_error_function_not_found(name);
	}
	enum rfc_input_type i = node->input_type;
	int * int_aux = (int *) input_buffer;

	int buffer_size = *int_aux;

	int_aux++;
	char * char_aux = (char *) int_aux;

	int validation_result = rfc_validate_buffer_for_function_node((void *) int_aux, node);
	if (!validation_result) {
		return validation_result;
	}

	if (i == rfc_int) {
		int (*callback)(int);
		callback = node->func;
		return callback(int_aux[2]);
	} else if (i == rfc_int_int) {
		int (*callback)(int, int);
		callback = node->func;
		return callback(int_aux[2], int_aux[5]);
	} else if (i == rfc_int_int_int) {
		int (*callback)(int, int, int);
		callback = node->func;
		return callback(int_aux[2], int_aux[5], int_aux[8]);
	} else if (i == rfc_int_int_int_int) {
		int (*callback)(int, int, int, int);
		callback = node->func;
		return callback(int_aux[2], int_aux[5], int_aux[8], int_aux[11]);
	} else if (i == rfc_char) {
		int (*callback)(char);
		callback = node->func;
		return callback(char_aux[3]);
	} else if (i == rfc_char_char) {
		int (*callback)(char, char);
		callback = node->func;
		return callback(char_aux[sizeof(int)*2], char_aux[sizeof(int)*4+1]);
	} else if (i == rfc_char_char_char) {
		int (*callback)(char, char, char);
		callback = node->func;
		return callback(char_aux[3], char_aux[5], char_aux[8]);
	} else if (i == rfc_char_char_char_char) {
		int (*callback)(char, char, char, char);
		callback = node->func;
		return callback(char_aux[3], char_aux[5], char_aux[8], char_aux[11]);
	} else {
		return rfc_error_insupported_something("input type on call exposed function", i);
	}
	return 0;
}

func_node_type * _rfc_find_exposed_function_by_name(char * name) {
	func_node_type * node = &rfc_func_root;
	while (node != 0) {
		if (rfc_compare_two_strings(node->name, name, 63)) {
			break;
		}
		node = node->next;
	}
	return node;
}
