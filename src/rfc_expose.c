#include "rfc_shared.h"
#include "rfc_put_filtered_string.c"

typedef struct func_node_type {
	char name[64];
	unsigned int input_type;
	unsigned int input_size;
	void * func;
	struct func_node_type * next;
} func_node_type;

func_node_type rfc_func_root = {.func = 0};

int _rfc_add_to_exposed_functions(char * name, unsigned int input_type, void * func);

int rfc_expose(char * descriptor, void * func) {
	if (descriptor == 0) {
		return rfc_error_invalid_something("descriptor string pointer");
	} else if (func == 0) {
		return rfc_error_invalid_something("function pointer");
	} else if (descriptor[0] != 'i' || descriptor[1] != 'n' || descriptor[2] != 't' || descriptor[3] != ' ') {
		return rfc_error_unimplemented("return type");
	}

	unsigned int input_type;

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
	printf("%s.\n", function_name);

	char params[128];
	rfc_put_filtered_string(&descriptor[4+function_name_length+1], ' ', params, 127);
	rfc_put_filtered_string(params, ')', params, 127);

	if (rfc_compare_two_strings(params, "int", 127)) {
		input_type = 1;
	} else if (rfc_compare_two_strings(params, "int*", 127)) {
		input_type = 2;
	} else if (rfc_compare_two_strings(params, "int*,int", 127)) {
		input_type = 3;
	} else if (rfc_compare_two_strings(params, "int,int", 127)) {
		input_type = 4;
	} else if (rfc_compare_two_strings(params, "int,int,int", 127)) {
		input_type = 5;
	} else if (rfc_compare_two_strings(params, "char", 127)) {
		input_type = 6;
	} else if (rfc_compare_two_strings(params, "char*", 127)) {
		input_type = 7;
	} else if (rfc_compare_two_strings(params, "char*,int", 127)) {
		input_type = 8;
	} else if (rfc_compare_two_strings(params, "char,char", 127)) {
		input_type = 9;
	} else if (rfc_compare_two_strings(params, "char,char,char", 127)) {
		input_type = 10;
	} else if (rfc_compare_two_strings(params, "int,char", 127)) {
		input_type = 11;
	} else if (rfc_compare_two_strings(params, "char,int", 127)) {
		input_type = 12;
	} else if (rfc_compare_two_strings(params, "int*,char", 127)) {
		input_type = 13;
	} else if (rfc_compare_two_strings(params, "char*,int", 127)) {
		input_type = 14;
	} else if (rfc_compare_two_strings(params, "int,char*", 127)) {
		input_type = 15;
	} else if (rfc_compare_two_strings(params, "char,int*", 127)) {
		input_type = 16;
	} else {
		char err_desc[32];
		snprintf(err_desc, 32, "function params as \"%s\"", params);
		return rfc_error_unimplemented(err_desc);
	}

	_rfc_add_to_exposed_functions(function_name, input_type, func);
}

int _rfc_add_to_exposed_functions(char * name, unsigned int input_type, void * func) {
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
	node->input_type = input_type;
	node->func = func;
	node->next = 0;
	return 1;
}