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
#define RFC_HOST_BUFFER_SIZE	64
#define RFC_DEFAULT_PORT	8086
#define RFC_FALLBACK_PORT	8087

typedef struct rfc_connection_data {
	char host[RFC_HOST_BUFFER_SIZE];
	int port;
} rfc_connection_data;

int rfc_error_invalid_port() {
	return 0;
}

int rfc_error_invalid_parameter() {
	return 0;
}

int rfc_error_invalid_connection_string() {
	return 0;
}

int rfc_error_send_buffer_overflow() {
	return 0;
}

int rfc_error_hostname_too_large() {
	return 0;
}

int rfc_error_port_too_high() {
	return 0;
}

int rfc_error_invalid_function_name() {
	return 0;
}

int rfc_error_invalid_hostname() {
	return 0;
}

#endif