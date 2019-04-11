#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_apply_type_to_buffer.c"
#include "../src/rfc_put_bin_buffer.c"

#define MAX_BUFFER_SIZE	256

int buffer_index;

int test_add_char(RFC_BYTEARRAY_TYPE * buffer, char value) {
	int result = rfc_apply_char_to_buffer((RFC_BYTEARRAY_TYPE *) &buffer[buffer_index], &value, 1);
	buffer_index += sizeof(char);
	if (!result) {
		printf("Error: Could not add value to buffer\n");
		exit(1);
	}
}

int test_add_int(RFC_BYTEARRAY_TYPE * buffer, int value) {
	int result = rfc_apply_int_to_buffer((RFC_BYTEARRAY_TYPE *) &buffer[buffer_index], &value, 1);
	buffer_index += sizeof(int);
	if (!result) {
		printf("Error: Could not add value to buffer\n");
		exit(1);
	}
}

int execute_unit_test_1() {
	buffer_index = 0;
	char expect[] = "00101000";
	char output[MAX_BUFFER_SIZE];
	RFC_BYTEARRAY_TYPE buffer[MAX_BUFFER_SIZE];
	char input = 40;
	test_add_char(buffer, input);
	rfc_put_bin_buffer(buffer, 1, output, sizeof(output));

	if (!rfc_compare_two_strings(output, expect, MAX_BUFFER_SIZE)) {
		printf("Error at sub-test 1:\n");
		printf("Input : %d\n", input);
		printf("Output: \"%s\" (%d bytes) \n", output, strlen(output));
		printf("Expect: \"%s\" (%d bytes) \n", expect, strlen(expect));
		exit(1);
	}
}

int execute_unit_test_2() {
	buffer_index = 0;
	char expect[] = "11110001 11101111 11001101 10101011";
	char output[MAX_BUFFER_SIZE];
	RFC_BYTEARRAY_TYPE buffer[MAX_BUFFER_SIZE];
	int input = 0xABCDEFF1;
	test_add_int(buffer, input);
	rfc_put_bin_buffer(buffer, 4, output, MAX_BUFFER_SIZE);

	if (!rfc_compare_two_strings(output, expect, sizeof(output))) {
		printf("Error at sub-test 2:\n");
		printf("Input : %d\n", input);
		printf("Output: \"%s\" (%d bytes) \n", output, strlen(output));
		printf("Expect: \"%s\" (%d bytes) \n", expect, strlen(expect));
		exit(1);
	}
}

int execute_unit_test_3() {
	buffer_index = 0;
	char expect[] = "10101010 10111011 10101011 00010110 11111111";
	char output[MAX_BUFFER_SIZE];
	RFC_BYTEARRAY_TYPE buffer[MAX_BUFFER_SIZE];
	char input[] = {0xAA, 0xBB, 0xAB, 0x16, 0xFF};
	test_add_char(buffer, input[0]);
	test_add_char(buffer, input[1]);
	test_add_char(buffer, input[2]);
	test_add_char(buffer, input[3]);
	test_add_char(buffer, input[4]);
	rfc_put_bin_buffer(buffer, 5, output, sizeof(output));

	if (!rfc_compare_two_strings(output, expect, MAX_BUFFER_SIZE)) {
		printf("Error at sub-test 3:\n");
		printf("Input : %d\n", input);
		printf("Output: \"%s\" (%d bytes) \n", output, strlen(output));
		printf("Expect: \"%s\" (%d bytes) \n", expect, strlen(expect));
		exit(1);
	}
}
int execute_unit_test_4() {
	char expect[] = "01101000 01101001 00100000 01101000 01101111 00000000";
	char output[MAX_BUFFER_SIZE];
	RFC_BYTEARRAY_TYPE buffer[MAX_BUFFER_SIZE];
	char input[] = "hi ho";

	int result = rfc_apply_char_to_buffer((RFC_BYTEARRAY_TYPE *) buffer, input, strlen(input)+1);

	if (!result) {
		printf("Error at sub-test 4:\n");
		printf("Input : \"%s\" (%d bytes) \n", input, strlen(input));
		printf("Output: Error code %d \n", result);
		printf("Expect: \"%s\" (%d bytes) \n", expect, strlen(expect));
		exit(1);
	}

	result = rfc_put_bin_buffer(buffer, strlen(input)+1, output, sizeof(output));

	if (!result) {
		printf("Error at sub-test 4:\n");
		printf("Input : \"%s\" (%d bytes) \n", input, strlen(input));
		printf("Output: Error code %d \n", result);
		printf("Expect: \"%s\" (%d bytes) \n", expect, strlen(expect));
		exit(1);
	}

	if (!rfc_compare_two_strings(output, expect, MAX_BUFFER_SIZE)) {
		printf("Error at sub-test 4:\n");
		printf("Input : \"%s\" (%d bytes) \n", input, strlen(input));
		printf("Output: \"%s\" (%d bytes) \n", output, strlen(output));
		printf("Expect: \"%s\" (%d bytes) \n", expect, strlen(expect));
		exit(1);
	}
}

int main() {
	execute_unit_test_1();
	execute_unit_test_2();
	execute_unit_test_3();
	execute_unit_test_4();
	return 0;
}