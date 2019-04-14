#include <stdlib.h> // exit
#include "../src/rfc_shared.h"
#include "../src/rfc_call.c"
#include "../src/rfc_expose.c"

int global_value = 0;

int set_one() {
	global_value = 1;
	return 2;
}
int set_specific(int a) {
	global_value = a;
	return 3;
}
int set_sum(int a, int b) {
	global_value = a+b;
	return 4;
}
int set_at_index(int * a, int index) {
	global_value = a[index];
	return 5;
}

int execute_unit_test_1() {
	global_value = 0;
	int return_value = rfc_call("internal", "set_one");
	if (return_value != 2) {
		printf("Error at sub-test 1: The call returned unexpected value\n");
		printf("Expect: %d\n", 2);
		printf("Output: %d\n", return_value);
		exit(1);
	}
	if (global_value != 1) {
		printf("Error at sub-test 1: The global value has an unexpected value\n");
		printf("Expect: %d\n", 1);
		printf("Output: %d\n", global_value);
		exit(1);
	}
}

int execute_unit_test_2() {
	global_value = 0;
	int return_value = rfc_call("internal", "set_specific", "int", 10);
	if (return_value != 3) {
		printf("Error at sub-test 2: The call returned unexpected value\n");
		printf("Expect: %d\n", 3);
		printf("Output: %d\n", return_value);
		exit(1);
	}
	if (global_value != 10) {
		printf("Error at sub-test 2: The global value has an unexpected value\n");
		printf("Expect: %d\n", 10);
		printf("Output: %d\n", global_value);
		exit(1);
	}
}

int execute_unit_test_3() {
	global_value = 0;
	int return_value = rfc_call("internal", "set_sum", "int", 5, "int", 128);
	if (return_value != 4) {
		printf("Error at sub-test 3: The call returned unexpected value\n");
		printf("Expect: %d\n", 4);
		printf("Output: %d\n", return_value);
		exit(1);
	}
	if (global_value != 5+128) {
		printf("Error at sub-test 3: The global value has an unexpected value\n");
		printf("Expect: %d\n", 5+128);
		printf("Output: %d\n", global_value);
		exit(1);
	}
}

int main() {
	if (!rfc_expose("int set_one()", set_one)) {
		printf("Test failed:\nThe 'set_one' expose returned an error code\n");
		exit(1);
	}
	if (!rfc_expose("int set_specific(int)", set_specific)) {
		printf("Test failed:\nThe 'set_specific' expose returned an error code\n");
		exit(1);
	}
	if (!rfc_expose("int set_sum(int, int)", set_sum)) {
		printf("Test failed:\nThe 'set_sum' expose returned an error code\n");
		exit(1);
	}
	if (!rfc_expose("int set_at_index(int*, int)", set_at_index)) {
		printf("Test failed:\nThe 'set_at_index' expose returned an error code\n");
		exit(1);
	}
	execute_unit_test_1();
	execute_unit_test_2();
	execute_unit_test_3();
	return 0;
}