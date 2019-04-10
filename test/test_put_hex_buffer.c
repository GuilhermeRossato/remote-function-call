#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_put_hex_buffer.c"

#define MAX_BUFFER_SIZE	256

int execute_unit_test(
	int id,
	char * input,
	int input_size,
	char * output
) {
	char buffer[MAX_BUFFER_SIZE] = "nothing written";

	int result = rfc_put_hex_buffer(input, input_size, buffer, 256);

	if (result != 1) {
		printf("Error at sub-test %d:\n", id);
		if (input_size <= 1) {
			printf("Input : %d (%d byte)\n", (unsigned char) input[0], input_size);
		} else {
			printf("Input : %d %d... (%d bytes)\n", (unsigned char) input[0], (unsigned char) input[1], input_size);
		}
		printf("Output: Error code %d\n", result);
		printf("Expect: \"%s\" (%d bytes)\n", output, strlen(output));
		printf("Print : \""); rfc_put_hex_buffer(input, input_size, 0, 0); printf("\"\n");
		exit(1);
	}

	if (!rfc_compare_two_strings(output, buffer, input_size)) {
		printf("Error at sub-test %d:\n", id);
		if (input_size <= 1) {
			printf("Input : %d (%d byte)\n", (unsigned char) input[0], input_size);
		} else {
			printf("Input : %d %d... (%d bytes)\n", (unsigned char) input[0], (unsigned char) input[1], input_size);
		}
		printf("Output: \"%s\" (%d bytes)\n", buffer, strlen(buffer));
		printf("Expect: \"%s\" (%d bytes)\n", output, strlen(output));
		printf("Print : \""); rfc_put_hex_buffer(input, input_size, 0, 0); printf("\"\n");
		exit(1);
	}
}

int main() {
	char singleTestArray[] = {0xAA, 0x00, 0x64, 0x5f};
	execute_unit_test(1, &singleTestArray[0], 1, "AA");
	execute_unit_test(2, &singleTestArray[1], 1, "00");
	execute_unit_test(3, &singleTestArray[2], 1, "64");
	execute_unit_test(4, &singleTestArray[3], 1, "5F");

	char byteArray1[] = {0xFF, 0xF0};
	execute_unit_test(5, byteArray1, 4, "FF F0");

	char byteArray2[] = {0xAA, 0x66, 0x13, 0xBA};
	execute_unit_test(6, byteArray2, 4, "AA 66 13 BA");

	return 0;
}