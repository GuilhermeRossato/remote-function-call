#include "rfc_shared.h"
#include "rfc_put_filtered_string.c"

int _rfc_add_to_exposed_functions(char * name, enum rfc_input_type input_type, void * func);

int rfc_expose(char * descriptor, void * func) {
	if (descriptor == 0) {
		return rfc_error_invalid_something("descriptor string pointer");
	} else if (func == 0) {
		return rfc_error_invalid_something("function pointer");
	} else if (descriptor[0] != 'i' || descriptor[1] != 'n' || descriptor[2] != 't' || descriptor[3] != ' ') {
		return rfc_error_unimplemented("return type");
	}

	char * open_paren = strrchr(descriptor, '(');
	char * close_paren = strrchr(descriptor, ')');

	char * null_def;

	#ifdef NULL
		null_def = NULL;
	#else
		null_def = 0;
	#endif

	if (open_paren == null_def || close_paren == null_def) {
		return rfc_error_invalid_something("descriptor string missing parenthesis");
	}

	char function_name[128];
	int function_name_length = open_paren-(&descriptor[4]);
	strncpy(function_name, &descriptor[4], function_name_length);
	function_name[function_name_length] = '\0';
	
	// Trim trailing spaces from function name if necessary
	if (function_name[function_name_length-1] == ' ') {
		int i;
		for (i=function_name_length-1;i>0;i--) {
			if (function_name[i] == ' ') {
				function_name[i] = '\0';
			}
		}
	}
	printf("exposing \"%s\"\n", function_name);

	char params[128];
	rfc_put_filtered_string(&descriptor[4+function_name_length+1], ' ', params, 127);
	rfc_put_filtered_string(params, ')', params, 127);
	rfc_put_filtered_string(params, ';', params, 127);

	enum rfc_input_type input_type = rfc_get_input_type_from_param_descriptor(params);
	if (input_type == rfc_unknown) {
		char err_desc[45];
		snprintf(err_desc, 45, "exposed params as \"%s\"", params);
		return rfc_error_unimplemented(err_desc);
	}

	_rfc_add_to_exposed_functions(function_name, input_type, func);
}

int _rfc_add_to_exposed_functions(char * name, enum rfc_input_type input_type, void * func) {
	func_node_type * node = &rfc_func_root;
	while (node->func != 0) {
		if (node->next == 0) {
			node->next = (struct func_node_type *) malloc(sizeof(struct func_node_type));
			node->next->func = 0;
		}
		node = node->next;
	}
	if (func == 0) {
		return rfc_error_invalid_something("function pointer");
	}
	if (strnlen(name, 63) >= 63) {
		return rfc_error_buffer_overflow("function name");
	}
	strncpy(node->name, name, 63);
	node->name[63] = '\0';
	node->name[strlen(name)] = '\0';
	node->input_type = input_type;
	node->func = func;
	node->next = 0;
	return 1;
}