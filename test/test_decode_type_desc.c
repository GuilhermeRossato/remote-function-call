#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_decode_type_desc.c"

#define MAX_BUFFER_SIZE	256

int execute_unit_test(int id, char * input, int expected) {
	int result = rfc_decode_type_desc(input);

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
	execute_unit_test(1, "unknown", 0);
	execute_unit_test(2, "", 0);
	execute_unit_test(3, "int", RFC_INT);
	execute_unit_test(4, " int ", RFC_INT);
	execute_unit_test(5, "char", RFC_CHAR);
	execute_unit_test(6, "char*", RFC_CHAR_ARRAY);
	execute_unit_test(7, "char * ", RFC_CHAR_ARRAY);
	return 0;
}