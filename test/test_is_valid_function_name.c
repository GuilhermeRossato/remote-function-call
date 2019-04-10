#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_is_valid_function_name.c"

#define MAX_BUFFER_SIZE	256

int execute_unit_test(int id, char * input, int expected) {
	int result = rfc_is_valid_function_name(input);

	if (result < 0) {
		printf("Error at sub-test %d:\n", id);
		printf("Input : \"%s\" (%d bytes)\n", input, strlen(input));
		printf("Output: Error Code %d\n", result);
		printf("Expect: %d\n", expected);
		exit(1);
	}

	if (result != expected) {
		printf("Error at sub-test %d:\n", id);
		printf("Input : \"%s\" (%d bytes)\n", input, strlen(input));
		printf("Output: %d\n", result);
		printf("Expect: %d\n", expected);
		exit(1);
	}
}

int main() {
	execute_unit_test(1, "basicFunctionName", 1);
	execute_unit_test(2, "unknown function", 0);
	execute_unit_test(3, "0invalid_function", 0);
	execute_unit_test(4, "so_strange_yet_it_is_perfectly_acceptable", 1);
	execute_unit_test(5, "extremelyLongFunctionNameShouldBeOkay", 1);
	execute_unit_test(6, "notchar", 1);
	execute_unit_test(6, "char", 0);
	execute_unit_test(7, "int", 0);
	execute_unit_test(8, "hello*", 0);
	return 0;
}