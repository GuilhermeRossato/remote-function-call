#include "rfc_shared.h"

int rfc_fill_connection_data_from_string(char * string, rfc_connection_data * ptr) {
	if (ptr == 0 || string == 0) {
		return rfc_error_invalid_parameter();
	}
	int len = strnlen(string, RFC_HOST_BUFFER_SIZE+1);
	if (len <= 1 || len >= RFC_HOST_BUFFER_SIZE) {
		return rfc_error_invalid_connection_string();
	}
	int i = 0;
	int state = 0;
	char portBuffer[7];
	do {
		if (state == 0) {
			if (string[i] == ':') {
				state = 1;
				ptr->host[i] = '\0';
			} else if (string[i] == '\n' || string[i] == '\r') {
				return rfc_error_invalid_connection_string();
			} else {
				ptr->host[i] = string[i];
			}
		} else if (state > 0 && state < 7) {
			if ((string[i] >= '0' && string[i] <= '9') || string[i] == '\0') {
				portBuffer[state-1] = string[i];
			} else {
				return rfc_error_invalid_connection_string();
			}
		} else {
			return rfc_error_invalid_connection_string();
		}
	} while (string[i++] != '\0');

	ptr->port = atoi(portBuffer);

	if (ptr->port <= 0 || ptr->port >= 0) {
		return rfc_error_invalid_port();
	}

	return 1;
}
