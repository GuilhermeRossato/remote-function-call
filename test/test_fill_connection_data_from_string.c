#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_fill_connection_data_from_string.c"

#define MAX_BUFFER_SIZE	256

int compare_two_strings(char * a, char * b) {
	if (strncmp(a, b, MAX_BUFFER_SIZE) == 0) {
		return 1;
	}
	return 0;
}

int execute_unit_test(int id, char * parameter, char * expected_host, int expected_port) {
	rfc_connection_data data;

	rfc_fill_connection_data_from_string(parameter, &data);

	if (!compare_two_strings(data.host, expected_host)) {
		printf("[%d] Expected host to be: '%s' Got: '%s'\n", id, expected_host, data.host);
		exit(1);
	}

	if (data.port != expected_port) {
		printf("[%d] Expected port to be: '%d' Got: '%d'\n", id, expected_port, data.port);
		exit(1);
	}
}

int main() {
	execute_unit_test(1, "localhost", "localhost", RFC_DEFAULT_PORT);
	execute_unit_test(1, "localhost:8080", "localhost", 8080);
	execute_unit_test(1, "google.com:884", "google.com", 884);
	execute_unit_test(1, ":8", "", 8);
	return 0;
}