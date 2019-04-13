#ifndef RFC_SHARED
#define RFC_SHARED

#include <stdarg.h> // va_start, va_arg, va_end
#include <string.h> // strnlen
#include <stdio.h> // putc, printf

#define RFC_VERSION		1

#define RFC_INT			1
#define RFC_CHAR		2
#define RFC_CHAR_ARRAY	3

#define RFC_MAX_CONNECTIONS	64
#define RFC_MAX_SEND_BUFFER_SIZE	256
#define RFC_MAX_ERROR_BUFFER_SIZE	256
#define RFC_HOST_BUFFER_SIZE	128
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
	void * data;
	struct rfc_parameter_info * next;
} rfc_parameter_info;

int rfc_error_invalid_something(char * something) {
	printf("RFC Error: The %s is invalid\n", something);
	return 0;
}

int rfc_error_insupported_something(char * something, int i) {
	printf("RFC Error: The %s is insupported, expected %d\n", something, i);
	return 0;
}

int rfc_error_buffer_overflow(char * location) {
	printf("RFC Error: Buffer overflow at %s\n", location);
	return 0;
}

int rfc_error_unimplemented(char * section) {
	printf("RFC Error: The parameter or operation is not implemented (%s)", section);
	return 0;
}

int rfc_error_function_not_found(char * name) {
	printf("RFC Error: The function \"%s\" was not found or is not exposed\n", name);
	return 0;
}

int rfc_compare_two_strings(char * a, char * b, int length) {
	if (a == 0 && b == 0) {
		return 1;
	} else if (a == 0 || b == 0) {
		return 0;
	} else if (strncmp(a, b, length) == 0) {
		return 1;
	}
	return 0;
}

#endif