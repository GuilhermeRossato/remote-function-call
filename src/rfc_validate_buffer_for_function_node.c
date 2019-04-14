#include "rfc_shared.h"

int rfc_validate_buffer_for_function_node(void * buffer, func_node_type * node) {
	if (buffer == 0 || node == 0) {
		return rfc_error_invalid_something("validation parameters");
	}

	enum rfc_input_type i = node->input_type;

	int * int_aux = (int *) buffer;
	char * char_aux = (char *) buffer;

	if (i == rfc_int) {
		if (int_aux[0] != RFC_INT) {
			return rfc_error_invalid_something("first parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("first parameter count");
		}
	} else if (i == rfc_int_int) {
		if (int_aux[0] != RFC_INT) {
			return rfc_error_invalid_something("first parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("first parameter count");
		}
		if (int_aux[3] != RFC_INT) {
			return rfc_error_invalid_something("second parameter type");
		}
		if (int_aux[4] != 0) {
			return rfc_error_invalid_something("second parameter count");
		}
	} else if (i == rfc_int_int_int) {
		if (int_aux[0] != RFC_INT) {
			return rfc_error_invalid_something("first parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("first parameter count");
		}
		if (int_aux[3] != RFC_INT) {
			return rfc_error_invalid_something("second parameter type");
		}
		if (int_aux[4] != 0) {
			return rfc_error_invalid_something("second parameter count");
		}
		if (int_aux[6] != RFC_INT) {
			return rfc_error_invalid_something("third parameter type");
		}
		if (int_aux[7] != 0) {
			return rfc_error_invalid_something("third parameter count");
		}
	} else if (i == rfc_int_int_int_int) {
		if (int_aux[0] != RFC_INT) {
			return rfc_error_invalid_something("first parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("first parameter count");
		}
		if (int_aux[3] != RFC_INT) {
			return rfc_error_invalid_something("second parameter type");
		}
		if (int_aux[4] != 0) {
			return rfc_error_invalid_something("second parameter count");
		}
		if (int_aux[6] != RFC_INT) {
			return rfc_error_invalid_something("third parameter type");
		}
		if (int_aux[7] != 0) {
			return rfc_error_invalid_something("third parameter count");
		}
		if (int_aux[9] != RFC_INT) {
			return rfc_error_invalid_something("fourth parameter type");
		}
		if (int_aux[10] != 0) {
			return rfc_error_invalid_something("fourth parameter count");
		}
	} else if (i == rfc_inta) {
		if (int_aux[0] != RFC_INT) {
			return rfc_error_invalid_something("first parameter type");
		}
	} else if (i == rfc_inta_int) {
		if (int_aux[0] != RFC_INT) {
			return rfc_error_invalid_something("first parameter type");
		}
		int first_parameter_count = int_aux[1] == 0 ? 1 : int_aux[1];
		if (int_aux[1+first_parameter_count] != RFC_INT) {
			return rfc_error_invalid_something("second parameter type");
		}
		if (int_aux[1+first_parameter_count+1] != 0) {
			return rfc_error_invalid_something("second parameter count");
		}
	} else if (i == rfc_char) {
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("first parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("first parameter count");
		}
	} else if (i == rfc_char_char) {
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("first parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("first parameter count");
		}
		int_aux++;
		int_aux++;
		char_aux = (char *) int_aux;
		char_aux++;
		int_aux = (int *) char_aux;
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("second parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("second parameter count");
		}
	} else if (i == rfc_char_char_char) {
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("first parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("first parameter count");
		}
		int_aux++;
		int_aux++;
		char_aux = (char *) int_aux;
		char_aux++;
		int_aux = (int *) char_aux;
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("second parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("second parameter count");
		}
		int_aux++;
		int_aux++;
		char_aux = (char *) int_aux;
		char_aux++;
		int_aux = (int *) char_aux;
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("third parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("third parameter count");
		}
	} else if (i == rfc_char_char_char_char) {
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("first parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("first parameter count");
		}
		int_aux++;
		int_aux++;
		char_aux = (char *) int_aux;
		char_aux++;
		int_aux = (int *) char_aux;
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("second parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("second parameter count");
		}
		int_aux++;
		int_aux++;
		char_aux = (char *) int_aux;
		char_aux++;
		int_aux = (int *) char_aux;
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("third parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("third parameter count");
		}
		int_aux++;
		int_aux++;
		char_aux = (char *) int_aux;
		char_aux++;
		int_aux = (int *) char_aux;
		if (int_aux[0] != RFC_CHAR) {
			return rfc_error_invalid_something("fourth parameter type");
		}
		if (int_aux[1] != 0) {
			return rfc_error_invalid_something("fourth parameter count");
		}
	} else {
		return rfc_error_invalid_something("validation for input type");
	}
	return 1;
}