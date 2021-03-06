#include "rfc_shared.h"
#include <stdlib.h>

/**
 * Takes a string in the format "hostname:port" and break it apart into the 'rfc_connection_data' struct (host as char array and port as integer).
 *
 * If the port is not specified the default (RFC_DEFAULT_PORT ~ 8086) will be used
 *
 * @param  string  The null-terminated char array that will be used to separate hostname and port.
 * @param  ptr     A previously allocated struct to be used as output of the function, where its properties will be written from the input string
 * @return         A success indicator if successful (usually 1) or an error indicator otherwise
 */
int rfc_fill_connection_data_from_string(char * string, rfc_connection_data * ptr) {
	if (ptr == 0 || string == 0) {
		return rfc_error_invalid_something("parameter");
	}
	int len = strnlen(string, RFC_HOST_BUFFER_SIZE+1);
	if (len <= 1 || len >= RFC_HOST_BUFFER_SIZE) {
		return rfc_error_invalid_something("connection string");
	}
	int i = 0;
	int state = 0;
	char portBuffer[7] = "";
	do {
		if (state == 0) {
			if (string[i] == ':') {
				state = 1;
				ptr->host[i] = '\0';
			} else if (string[i] == '\n' || string[i] == '\r') {
				return rfc_error_invalid_something("hostname");
			} else {
				ptr->host[i] = string[i];
			}
		} else if (state > 0 && state < 7) {
			if ((string[i] >= '0' && string[i] <= '9') || string[i] == '\0') {
				portBuffer[state-1] = string[i];
				state++;
			} else {
				return rfc_error_invalid_something("port");
			}
		} else {
			return rfc_error_invalid_something("connection string");
		}
	} while (string[i++] != '\0');

	if (portBuffer[0] == '\0') {
		ptr->port = RFC_DEFAULT_PORT;
	} else {
		ptr->port = atoi(portBuffer);
	}

	if (ptr->port <= 0) {
		return rfc_error_invalid_something("port");
	}

	return 1;
}
