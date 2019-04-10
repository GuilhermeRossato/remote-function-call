#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_remove_char_from_string.c"

#define MAX_BUFFER_SIZE	256

int execute_unit_test(
	int id,
	char * original_input,
	char to_remove,
	char * expected
) {
	char output[MAX_BUFFER_SIZE];
	int input_size = strlen(original_input);

	strncpy(output, original_input, MAX_BUFFER_SIZE);

	int length = rfc_remove_char_from_string(output, to_remove);
	if (length < 0) {
		printf("Error at sub-test %d:\n", id);
		printf("Input : \"%s\" (%d bytes)\n", original_input, input_size);
		printf("Output: Error code %d\n", length);
		printf("Expect: \"%s\" (%d bytes)\n", expected, strlen(expected));
		exit(1);
	}

	if (!rfc_compare_two_strings(expected, output, MAX_BUFFER_SIZE)) {
		printf("Error at sub-test %d:\n", id);
		printf("Input : \"%s\" (%d bytes)\n", original_input, input_size);
		printf("Output: \"%s\" (%d bytes)\n", output, input_size);
		printf("Expect: \"%s\" (%d bytes)\n", expected, strlen(expected));
		exit(1);
	}
}

int main() {
	execute_unit_test(1, "Hello World", ' ', "HelloWorld");
	execute_unit_test(2, "what-is-love", '-', "whatislove");
	execute_unit_test(3, "there-is-a-somewhat-long-text", 'e', "thr-is-a-somwhat-long-txt");
	execute_unit_test(4, "This is a text with a \nline", '\n', "This is a text with a line");
	execute_unit_test(5, "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", 'A', "");
	execute_unit_test(6, "", 'a', "");
	execute_unit_test(7, "unchanged", 'x', "unchanged");
	execute_unit_test(8, "terminated", '\0', "terminated");
	return 0;
}