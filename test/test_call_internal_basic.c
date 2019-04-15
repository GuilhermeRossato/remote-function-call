#include <stdlib.h> // exit
#include "../src/rfc_shared.h"
#include "../src/rfc_call.c"
#include "../src/rfc_expose.c"

int global_value = 0;

int func_int(int a) {
	global_value = a;
	return 1;
}
int func_char(char a) {
	global_value = a;
	return 1;
}
int func_int_int(int a, int b) {
	global_value = a+b;
	return 1;
}
int func_int_char(int a, char b) {
	global_value = ((int)a)+((int)b);
	return 1;
}
int func_char_int(char a, int b) {
	global_value = a+b;
	return 1;
}
int func_char_char(char a, char b) {
	global_value = a+b;
	return 1;
}

int execute_expose() {
	if (!rfc_expose("int func_int(int)", func_int)) {
		printf("Test failed:\nThe 'func_int' expose returned an error code\n");
		exit(1);
	} else if (!rfc_expose("int func_char(char)", func_char)) {
		printf("Test failed:\nThe 'func_char' expose returned an error code\n");
		exit(1);
	} else if (!rfc_expose("int func_int_int(int, int)", func_int_int)) {
		printf("Test failed:\nThe 'func_int_int' expose returned an error code\n");
		exit(1);
	} else if (!rfc_expose("int func_int_char(int, char)", func_int_char)) {
		printf("Test failed:\nThe 'func_int_char' expose returned an error code\n");
		exit(1);
	} else if (!rfc_expose("int func_char_int(char, int)", func_char_int)) {
		printf("Test failed:\nThe 'func_char_int' expose returned an error code\n");
		exit(1);
	} else if (!rfc_expose("int func_char_char(char, char)", func_char_char)) {
		printf("Test failed:\nThe 'func_char_char' expose returned an error code\n");
		exit(1);
	}
}

int execute_test_1() {
	if (!rfc_call("internal", "func_int", "int", 1)) {
		printf("The function 'func_int' did not return the expected success code\n");
		exit(1);
	}
	if (global_value != 1) {
		printf("The function 'func_int' did not set the global value to %d, instead got %d\n", 1, global_value);
		exit(1);
	}
}

int execute_test_2() {
	if (!rfc_call("internal", "func_char", "char", 65)) {
		printf("The function 'func_char' did not return the expected success code\n");
		exit(1);
	}
	if (global_value != 65) {
		printf("The function 'func_char' did not set the global value to %d, instead got %d\n", 65, global_value);
		exit(1);
	}
}

int execute_test_3() {
	if (!rfc_call("internal", "func_int_int", "int", 76, "int", 87)) {
		printf("The function 'func_int' did not return the expected success code\n");
		exit(1);
	}
	if (global_value != 76+87) {
		printf("The function 'func_int' did not set the global value to %d, instead got %d\n", 76+87, global_value);
		exit(1);
	}
}

int execute_test_4() {
	if (!rfc_call("internal", "func_int_char", "int", 2, "char", 5)) {
		printf("The function 'func_int_char' did not return the expected success code\n");
		exit(1);
	}
	if (global_value != 2+5) {
		printf("The function 'func_int_char' did not set the global value to %d, instead got %d\n", 2+5, global_value);
		exit(1);
	}
}

int execute_test_5() {
	if (!rfc_call("internal", "func_char_int", "char", 7, "int", 9)) {
		printf("The function 'func_char_int' did not return the expected success code\n");
		exit(1);
	}
	if (global_value != 7+9) {
		printf("The function 'func_char_int' did not set the global value to %d, instead got %d\n", 7+9, global_value);
		exit(1);
	}
}

int execute_test_6() {
	if (!rfc_call("internal", "func_char_char", "char", 3, "char", 11)) {
		printf("The function 'func_char_char' did not return the expected success code\n");
		exit(1);
	}
	if (global_value != 3+11) {
		printf("The function 'func_char_char' did not set the global value to %d, instead got %d\n", 3+11, global_value);
		exit(1);
	}
}

int main() {
	execute_expose();
	execute_test_1();
	execute_test_2();
	execute_test_3();
	execute_test_4();
	execute_test_5();
	return 0;
}