#include <stdlib.h> // exit
#include "../src/rfc_shared.h"
#include "../src/rfc_put_bin_buffer.c"
#include "../src/rfc_expose.c"
#include "../src/rfc_call_exposed_function.c"
#include "../src/rfc_build_buffer.c"

char local_global_string[256] = "";

int putIntoLocalArray(char * string) {
	snprintf(local_global_string, 255, "%s", string);
	return 1;
}

int allPositive(int * values, int length) {
	int i = 0;
	for (i=0; i<length; i++) {
		if (values[i] < 0) {
			return -1;
		}
	}
	return 1;
}

int countActives(int * matrix, int width, int height) {
	int i = 0;
	int sum = 0;
	for (i=0;i<width*height;i++) {
		sum += matrix[i] > 0 ? 1 : 0;
	}
	return sum;
}

int execute_unit_test_1() {
	char string_buffer[] = "ABCDE";

	rfc_parameter_info a;
	a.type = RFC_CHAR_ARRAY;
	a.count = sizeof(string_buffer) / sizeof(char);

	if (a.count != strlen(string_buffer)+1) {
		printf("Error at sub-test 1: The buffer size was different than the expected string length\n");
		printf("Strlen: %d\n", strlen(string_buffer));
		printf("B size: %d\n", a.count);
		printf("Expect: %d\n", strlen(string_buffer)+1);
		exit(1);
	}

	a.next = 0;
	a.data = (void *)&string_buffer;

	size_t buffer_size = rfc_get_buffer_size(&a);
	char * buffer = (char *) malloc(sizeof(char) * buffer_size);

	if (!rfc_build_buffer(&a, buffer, buffer_size)) {
		free(buffer);
		printf("Error at sub-test 1: Could not build buffer\n");
		exit(1);
	}

	int call_result = rfc_call_exposed_function("putIntoLocalArray", buffer, buffer_size);
	if (call_result != 1) {
		free(buffer);
		printf("Error at sub-test 1: Function returned incorrect value\n");
		printf("Output: %d\n", call_result);
		printf("Expect: %d\n", 1);
		exit(1);
	}

	if (!rfc_compare_two_strings(local_global_string, string_buffer, 255)) {
		free(buffer);
		printf("Error at sub-test 1: Function returned incorrect value\n");
		printf("Input : %s\n", string_buffer);
		printf("Output: %s\n", local_global_string);
		exit(1);
	}

	free(buffer);
}

int execute_unit_test_2() {
	int values[] = {3, 4, -6, 8};
	int v_length = sizeof(values)/sizeof(int);

	rfc_parameter_info a, b;
	a.type = RFC_INT_ARRAY;
	a.count = 4;
	a.next = &b;
	a.data = (void *) &values;

	b.type = RFC_INT;
	b.count = 0;
	b.next = 0;
	b.data = (void *) &v_length;

	size_t buffer_size = rfc_get_buffer_size(&a);
	char * buffer = (char *) malloc(sizeof(char) * buffer_size);

	if (!rfc_build_buffer(&a, buffer, buffer_size)) {
		free(buffer);
		printf("Error at sub-test 2: Could not build buffer\n");
		exit(1);
	}

	int call_result = rfc_call_exposed_function("allPositive", buffer, buffer_size);
	if (call_result != -1) {
		free(buffer);
		printf("Error at sub-test 2: Function returned incorrect value\n");
		printf("Output: %d\n", call_result);
		printf("Expect: %d\n", -1);
		exit(1);
	}

	values[2] = 257;

	if (!rfc_build_buffer(&a, buffer, buffer_size)) {
		free(buffer);
		printf("Error at sub-test 2: Could not rebuild buffer\n");
		exit(1);
	}

	call_result = rfc_call_exposed_function("allPositive", buffer, buffer_size);
	if (call_result != 1) {
		free(buffer);
		printf("Error at sub-test 2: Rerun of function returned incorrect value\n");
		printf("Output: %d\n", call_result);
		printf("Expect: %d\n", 1);
		exit(1);
	}

	free(buffer);
}

int main() {
	if (!rfc_expose("int putIntoLocalArray(char *)", putIntoLocalArray)) {
		printf("Test failed:\nThe first expose returned an error code\n");
		exit(1);
	}
	if (!rfc_expose("int allPositive(int *, int)", allPositive)) {
		printf("Test failed:\nThe second expose returned an error code\n");
		exit(1);
	}
	execute_unit_test_1();
	//execute_unit_test_2();
	return 0;
}