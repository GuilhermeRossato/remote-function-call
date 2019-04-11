#ifndef RFC_SHARED
#define RFC_SHARED

#include <stdarg.h> // va_start, va_arg, va_end
#include <string.h> // strnlen
#include <stdio.h> // putc, printf

#define RFC_INT			1
#define RFC_CHAR		2
#define RFC_CHAR_ARRAY	3

#define RFC_MAX_CONNECTIONS	64
#define RFC_MAX_SEND_BUFFER_SIZE	256
#define RFC_MAX_ERROR_BUFFER_SIZE	256
#define RFC_HOST_BUFFER_SIZE	128
#define RFC_DEFAULT_PORT	8086
#define RFC_FALLBACK_PORT	8087

typedef struct rfc_connection_data {
	char host[RFC_HOST_BUFFER_SIZE];
	int port;
} rfc_connection_data;

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

int rfc_compare_two_strings(char * a, char * b, int length) {
	if (strncmp(a, b, length) == 0) {
		return 1;
	}
	return 0;
}

#endif