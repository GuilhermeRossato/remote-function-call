#ifndef RFC_SHARED
#define RFC_SHARED

#include <stdarg.h> // va_start, va_arg, va_end
#include <string.h> // strnlen
#include <stdio.h> // putc, printf

#define RFC_VERSION		1

#define RFC_INT			1
#define RFC_INT_ARRAY	2
#define RFC_CHAR		3
#define RFC_CHAR_ARRAY	4

#define RFC_MAX_CONNECTIONS	64
#define RFC_MAX_SEND_BUFFER_SIZE	256
#define RFC_MAX_ERROR_BUFFER_SIZE	256
#define RFC_HOST_BUFFER_SIZE	128
#define RFC_MAX_FUNCTION_DESCRIPTOR_SIZE	256
#define RFC_DEFAULT_PORT	8086
#define RFC_FALLBACK_PORT	8087

#define RFC_PARAMTYPE_TYPE	int
#define RFC_PARAMSIZE_TYPE	int
#define RFC_BYTEARRAY_TYPE	unsigned char

typedef struct rfc_connection_data {
	char host[RFC_HOST_BUFFER_SIZE];
	int port;
} rfc_connection_data;

typedef struct rfc_parameter_info {
	RFC_PARAMTYPE_TYPE type;
	RFC_PARAMSIZE_TYPE count;
	char is_data_allocated;
	void * data;
	struct rfc_parameter_info * next;
} rfc_parameter_info;

int rfc_compare_two_strings(char * a, char * b, int length);

#include "rfc_input_type.c"

typedef struct func_node_type {
	char name[64];
	enum rfc_input_type input_type;
	unsigned int input_size;
	void * func;
	struct func_node_type * next;
} func_node_type;

func_node_type rfc_func_root = {.func = 0};

int rfc_error_invalid_something(char * something) {
	printf("RFC Error: The %s is invalid\n", something);
	return 0;
}

int rfc_error_insupported_something(char * something, int i) {
	printf("RFC Error: The %s is insupported (%d)\n", something, i);
	return 0;
}

int rfc_error_buffer_overflow(char * location) {
	printf("RFC Error: Buffer overflow at %s\n", location);
	return 0;
}

int rfc_error_unimplemented(char * section) {
	printf("RFC Error: The parameter or operation is not implemented (%s)\n", section);
	return 0;
}

int rfc_error_mismatched_parameter(char * origin_file, char * type, int expected_id, int type_id, int parameter_id) {
	printf("RFC Error: Mismatched parameter %s, expected %d, got %d at parameter %d\n", type, expected_id, type_id, parameter_id);
	return 0;
}

int rfc_error_function_not_found(char * name) {
	printf("RFC Error: The function \"%s\" was not found or is not exposed\n", name);
	return 0;
}

int rfc_compare_two_strings(char * a, char * b, int length) {
	if (a == b) {
		return 1;
	} else if (a == 0 || b == 0) {
		return 0;
	} else if (strncmp(a, b, length) == 0) {
		return 1;
	}
	return 0;
}

#endif