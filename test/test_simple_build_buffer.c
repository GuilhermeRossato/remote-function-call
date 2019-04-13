#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_get_buffer_size.c"
#include "../src/rfc_build_buffer.c"
#include "../src/rfc_put_bin_buffer.c"

#define MAX_BUFFER_SIZE	256

int execute_unit_test_1() {
	RFC_BYTEARRAY_TYPE buffer[256];

	int buffer_size = 0x5FFAFA0A;
	int result = rfc_build_buffer(0, buffer, buffer_size);
	if (result != 1) {
		printf("Error at sub-test 1: Build function return\n");
		printf("Output: %d\n", result);
		printf("Expect: 0\n");
		exit(1);
	}

	int * int_helper = (int *) buffer;

	if (*int_helper != buffer_size) {
		printf("Error at sub-test 1: First buffer value\n");
		printf("Input : %d\n", buffer_size);
		printf("Output: %d\n", *int_helper);
		printf("Expect: %d\n", buffer_size);
		exit(1);
	}
}

int execute_unit_test_2() {
	const int expected_size = sizeof(int)+sizeof(RFC_PARAMTYPE_TYPE)+sizeof(RFC_PARAMSIZE_TYPE)+sizeof(int);

	rfc_parameter_info a;
	int value = 67;

	a.type = RFC_INT;
	a.count = 1;
	a.next = 0;
	a.data = &value;

	int buffer_size = rfc_get_buffer_size(&a);

	if (buffer_size != expected_size) {
		printf("Error at sub-test 2: Buffer size function return\n");
		printf("Output: %d\n", buffer_size);
		printf("Expect: %d\n", expected_size);
		exit(1);
	}

	RFC_BYTEARRAY_TYPE buffer[expected_size];

	int result = rfc_build_buffer(&a, buffer, buffer_size);

	int * int_helper = (int *) buffer;

	if (*int_helper != buffer_size) {
		printf("Error at sub-test 2: First buffer value (buffer size)\n");
		printf("Input : %d\n", buffer_size);
		printf("Output: %d\n", *int_helper);
		printf("Expect: %d\n", buffer_size);
		exit(1);
	}

	int_helper++;

	if (*int_helper != RFC_INT) {
		printf("Error at sub-test 2: Second buffer value (parameter type)\n");
		printf("Input : %d\n", RFC_INT);
		printf("Output: %d\n", *int_helper);
		printf("Expect: %d\n", RFC_INT);
		exit(1);
	}

	int_helper++;

	if (*int_helper != a.count) {
		printf("Error at sub-test 2: Third buffer value (parameter count)\n");
		printf("Input : %d\n", a.count);
		printf("Output: %d\n", *int_helper);
		printf("Expect: %d\n", a.count);
		exit(1);
	}

	int_helper++;

	if (*int_helper != value) {
		printf("Error at sub-test 2: Fourth buffer value (parameter value)\n");
		printf("Input : %d\n", value);
		printf("Output: %d\n", *int_helper);
		printf("Expect: %d\n", value);
		exit(1);
	}
}

int execute_unit_test_3() {
	const int expected_size = sizeof(int)+sizeof(RFC_PARAMTYPE_TYPE)+sizeof(RFC_PARAMSIZE_TYPE)+sizeof(char);

	char value = 67;
	rfc_parameter_info a;
	a.type = RFC_CHAR;
	a.count = 1;
	a.next = 0;
	a.data = &value;


	int buffer_size = rfc_get_buffer_size(&a);

	if (buffer_size != expected_size) {
		printf("Error at sub-test 3: Buffer size function return\n");
		printf("Output: %d\n", buffer_size);
		printf("Expect: %d\n", expected_size);
		exit(1);
	}

	RFC_BYTEARRAY_TYPE buffer[expected_size];
	RFC_BYTEARRAY_TYPE * buffer_last_byte = buffer + expected_size - 1;

	int result = rfc_build_buffer(&a, buffer, buffer_size);

	int * int_helper = (int *) buffer;

	if (*int_helper != buffer_size) {
		printf("Error at sub-test 3: First buffer value (buffer size)\n");
		printf("Input : %d\n", buffer_size);
		printf("Output: %d\n", *int_helper);
		printf("Expect: %d\n", buffer_size);
		exit(1);
	}

	int_helper++;

	if (*int_helper != RFC_CHAR) {
		printf("Error at sub-test 3: Second buffer value (parameter type)\n");
		printf("Input : %d\n", RFC_CHAR);
		printf("Output: %d\n", *int_helper);
		printf("Expect: %d\n", RFC_CHAR);
		exit(1);
	}
	int_helper++;

	if (*int_helper != a.count) {
		printf("Error at sub-test 3: Third buffer value (parameter count)\n");
		printf("Input : %d\n", a.count);
		printf("Output: %d\n", *int_helper);
		printf("Expect: %d\n", a.count);
		exit(1);
	}
	int_helper++;

	char * char_helper = (char *) int_helper;

	if (*char_helper != value) {
		printf("Error at sub-test 3: Fourth buffer value (parameter value)\n");
		printf("Input : %d\n", value);
		printf("Output: %d\n", *char_helper);
		printf("Expect: %d\n", value);
		exit(1);
	}

	if ((RFC_BYTEARRAY_TYPE *) char_helper != buffer_last_byte) {
		printf("Error at sub-test 3: Final buffer pointer is not at the expected end\n");
		printf("Start : %08X\n", buffer);
		printf("Length: %8X\n", buffer_size-1);
		printf("Expect: %08X\n", buffer_last_byte);
		printf("Output: %08X\n", char_helper);
		exit(1);
	}
}

int main() {
	execute_unit_test_1();
	execute_unit_test_2();
	execute_unit_test_3();
	return 0;
}