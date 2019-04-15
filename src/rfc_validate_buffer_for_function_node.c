#include "rfc_shared.h"

int rfc_validate_buffer_for_function_node(void * buffer, func_node_type * node) {
	if (buffer == 0 || node == 0) {
		return rfc_error_invalid_something("validation parameters");
	}

	enum rfc_input_type i = node->input_type;

	void * helper = (void *) buffer;
	int * int_aux = (int *) buffer;
	char * char_aux = (char *) buffer;

	int type, count;
	if (i == rfc_void) {
		return 1;
	} else if (i == rfc_int) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_char) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_int_int) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_int_char) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_char_int) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_char_char) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_int_int_int) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_int_int_char) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_int_char_int) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_int_char_char) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_char_int_int) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_char_int_char) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_char_char_int) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 1);
		if (type != RFC_INT || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_char_char_char) {
		type = *(int *) (helper + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		type = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 0);
		count = *(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 1);
		if (type != RFC_CHAR || count != 0) {
			return rfc_error_invalid_something("parameter from validation");
		}
		return 1;
	} else if (i == rfc_inta) {
		if (int_aux[0] != RFC_INT_ARRAY) {
			return rfc_error_invalid_something("first parameter type");
		}
	} else if (i == rfc_inta_int) {
		if (int_aux[0] != RFC_INT_ARRAY) {
			return rfc_error_invalid_something("first parameter type");
		}
		int first_parameter_count = int_aux[1] == 0 ? 1 : int_aux[1];
		if (int_aux[1+first_parameter_count+1] != RFC_INT) {
			return rfc_error_invalid_something("second parameter type");
		}
		if (int_aux[1+first_parameter_count+2] != 0) {
			return rfc_error_invalid_something("second parameter count");
		}
	} else if (i == rfc_chara) {
		if (int_aux[0] != RFC_CHAR_ARRAY) {
			return rfc_error_invalid_something("first parameter type");
		}
	} else if (i == rfc_chara_int) {
		if (int_aux[0] != RFC_CHAR_ARRAY) {
			return rfc_error_invalid_something("first parameter type");
		}
		int_aux++;
		int string_count = *int_aux;
		int_aux++;
		char_aux = (char *) int_aux;
		printf("skipping %d characters\n", string_count);
		int x;
		for (x=-4;x<string_count+4;x++) {
			printf("%d ", char_aux[x]);
		}
		printf("\n");
		char_aux += string_count - 1;
		int_aux = (int *) char_aux;
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("second parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("second parameter count");
		}
	} else {
		return rfc_error_invalid_something("(unhandled) validation for function node");
	}
	return 1;
}