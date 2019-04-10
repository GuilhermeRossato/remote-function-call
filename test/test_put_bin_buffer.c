#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_put_bin_buffer.c"

#define MAX_BUFFER_SIZE	256

int execute_unit_test(
	int id,
	char * input,
	char * output
) {
	char buffer[MAX_BUFFER_SIZE] = "nothing written";
	int input_size = strlen(input);

	int result = rfc_put_bin_buffer(input, input_size, buffer, MAX_BUFFER_SIZE);
	if (result != 1) {
		printf("Error at sub-test %d:\n", id);
		printf("Input : \"%s\" (%d bytes)\n", input, input_size);
		printf("Output: Error code %d\n", result);
		printf("Expect: \"%s\" (%d bytes)\n", output, strlen(output));
		printf("Print : \""); rfc_put_bin_buffer(input, input_size, 0, 0); printf("\"\n");
		exit(1);
	}

	if (!rfc_compare_two_strings(output, buffer, MAX_BUFFER_SIZE)) {
		printf("Error at sub-test %d:\n", id);
		printf("Input : \"%s\" (%d bytes)\n", input, input_size);
		printf("Output: \"%s\" (%d bytes)\n", buffer, strlen(buffer));
		printf("Expect: \"%s\" (%d bytes)\n", output, strlen(output));
		printf("Print : \""); rfc_put_bin_buffer(input, input_size, 0, 0); printf("\"\n");
		exit(1);
	}
}

int main() {
	execute_unit_test(1, "a", "01100001");
	execute_unit_test(2, "b", "01100010");
	execute_unit_test(3, "d", "01100100");
	execute_unit_test(4, "e", "01100101");
	execute_unit_test(5, "aa", "01100001 01100001");
	execute_unit_test(6, "abc", "01100001 01100010 01100011");

	char byteArray[] = {1, 170, 171, 172, 173, 174, 0};
	execute_unit_test(6, byteArray, "00000001 10101010 10101011 10101100 10101101 10101110");

	return 0;
}