#include "rfc_shared.h"
#include "rfc_validate_buffer_for_function_node.c"
#include "rfc_dereference_function_call.c"

func_node_type * _rfc_find_exposed_function_by_name(char * name);

int rfc_call_exposed_function(char * name, unsigned char * input_buffer, int input_length) {
	func_node_type * node = _rfc_find_exposed_function_by_name(name);
	if (node == 0) {
		return rfc_error_function_not_found(name);
	}
	enum rfc_input_type i = node->input_type;
	int * int_aux = (int *) input_buffer;

	int buffer_size = *int_aux;

	int_aux++;

	int validation_result = rfc_validate_buffer_for_function_node((void *) int_aux, node);
	if (!validation_result) {
		return validation_result;
	}

	int call_result = rfc_dereference_function_call(node->func, node->input_type, (void *) int_aux, buffer_size);

	return call_result;
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
