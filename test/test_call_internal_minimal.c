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
int set_index_at(int index, int * a) {
	global_value = a[index];
	return 6;
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

int execute_unit_test_4() {
	global_value = 0;
	int local_array[] = {9, 8, 7, 6, 5};
	int index = 2;
	int return_value = rfc_call("internal", "set_at_index", "int*", local_array, 5, "int", index);
	if (return_value != 5) {
		printf("Error at sub-test 4: The call returned unexpected value\n");
		printf("Expect: %d\n", 5);
		printf("Output: %d\n", return_value);
		exit(1);
	}
	if (global_value != local_array[index]) {
		printf("Error at sub-test 4: The global value has an unexpected value\n");
		printf("Expect: %d\n", local_array[index]);
		printf("Output: %d\n", global_value);
		exit(1);
	}
}

int execute_unit_test_5() {
	global_value = 0;
	int local_array[] = {9, 8, 7, 6, 5, 8, 9};
	int index = 6;
	int return_value = rfc_call("internal", "set_index_at", "int", index, "int*", local_array, 7);
	if (return_value != 6) {
		printf("Error at sub-test 4: The call returned unexpected value\n");
		printf("Expect: %d\n", 6);
		printf("Output: %d\n", return_value);
		exit(1);
	}
	if (global_value != local_array[index]) {
		printf("Error at sub-test 4: The global value has an unexpected value\n");
		printf("Expect: %d\n", local_array[index]);
		printf("Output: %d\n", global_value);
		exit(1);
	}
}

int many_parameters(int a, int b, int c, char d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 7;
}

int execute_unit_test_6() {
	global_value = 0;
	int return_value = rfc_call("internal", "many_parameters", "int", 5, "int", 4, "int", 3, "char", 2);
	if (return_value != 7) {
		printf("Error at sub-test 5: The call returned unexpected value\n");
		printf("Expect: %d\n", 7);
		printf("Output: %d\n", return_value);
		exit(1);
	}
	if (global_value != 5+4+3+2) {
		printf("Error at sub-test 5: The global value has an unexpected value\n");
		printf("Expect: %d\n", 5+4+3+2);
		printf("Output: %d\n", global_value);
		exit(1);
	}
}

int main() {
	if (!rfc_expose("int set_one()", set_one)) {
		printf("Test failed:\nThe 'set_one' expose returned an error code\n");
		exit(1);
	} else if (!rfc_expose("int set_specific(int)", set_specific)) {
		printf("Test failed:\nThe 'set_specific' expose returned an error code\n");
		exit(1);
	} else if (!rfc_expose("int set_sum(int, int)", set_sum)) {
		printf("Test failed:\nThe 'set_sum' expose returned an error code\n");
		exit(1);
	} else if (!rfc_expose("int set_at_index(int*, int)", set_at_index)) {
		printf("Test failed:\nThe 'set_at_index' expose returned an error code\n");
		exit(1);
	} else if (!rfc_expose("int set_index_at(int, int*)", set_index_at)) {
		printf("Test failed:\nThe 'set_index_at' expose returned an error code\n");
		exit(1);
	} else if (!rfc_expose("int many_parameters(int,int,int,char)", many_parameters)) {
		printf("Test failed:\nThe 'many_parameters' expose returned an error code\n");
		exit(1);
	}
	execute_unit_test_1();
	execute_unit_test_2();
	execute_unit_test_3();
	execute_unit_test_4();
	execute_unit_test_5();
	execute_unit_test_6();
	return 0;
}