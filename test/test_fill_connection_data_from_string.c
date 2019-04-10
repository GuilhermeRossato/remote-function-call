#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_fill_connection_data_from_string.c"

#define MAX_BUFFER_SIZE	256

int execute_unit_test(int id, char * parameter, char * expected_host, int expected_port) {
	rfc_connection_data data;

	int result = rfc_fill_connection_data_from_string(parameter, &data);

	if (result != 1) {
		printf("Error at sub-test %d:\n", id);
		printf("Input : \"%s\" (%d bytes)\n", parameter, strlen(parameter));
		printf("Output: Error Code %d\n", result);
		printf("Expect: \"%s\" (%d bytes)\n", expected_host, strlen(expected_host));
		exit(1);
	}

	if (!rfc_compare_two_strings(data.host, expected_host, MAX_BUFFER_SIZE)) {
		printf("Error at sub-test %d:\n", id);
		printf("Input : \"%s\" (%d bytes)\n", parameter, strlen(parameter));
		printf("Output: \"%s\" (%d bytes)\n", data.host, strlen(data.host));
		printf("Expect: \"%s\" (%d bytes)\n", expected_host, strlen(expected_host));
		exit(1);
	}

	if (data.port != expected_port) {
		printf("Error at sub-test %d:\n", id);
		printf("Input : \"%s\" (%d bytes)\n", parameter, strlen(parameter));
		printf("Output: %d\n", data.port);
		printf("Expect: %d\n", expected_port);
		exit(1);
	}
}

int main() {
	execute_unit_test(1, "localhost", "localhost", RFC_DEFAULT_PORT);
	execute_unit_test(2, "localhost:8080", "localhost", 8080);
	execute_unit_test(3, "google.com:884", "google.com", 884);
	execute_unit_test(4, ":8", "", 8);
	return 0;
}