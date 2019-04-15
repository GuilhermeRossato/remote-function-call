/**
 * This file was generated automatically by the command "npm run generate-intensive-call-test".
 * Do not change it manually.
 */

#include <stdlib.h>
#include "../src/rfc_shared.h"
#include "../src/rfc_call.c"
#include "../src/rfc_expose.c"

int global_value = 0;
int func_int(int a) {
	global_value = ((int) a);
	return 1;
}
int func_int_int(int a, int b) {
	global_value = ((int) a)+((int) b);
	return 1;
}
int func_int_int_int(int a, int b, int c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_int_int_char(int a, int b, char c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_int_char(int a, char b) {
	global_value = ((int) a)+((int) b);
	return 1;
}
int func_int_char_int(int a, char b, int c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_int_char_char(int a, char b, char c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_char(char a) {
	global_value = ((int) a);
	return 1;
}
int func_char_int(char a, int b) {
	global_value = ((int) a)+((int) b);
	return 1;
}
int func_char_int_int(char a, int b, int c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_char_int_char(char a, int b, char c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_char_char(char a, char b) {
	global_value = ((int) a)+((int) b);
	return 1;
}
int func_char_char_int(char a, char b, int c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_char_char_char(char a, char b, char c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}

int execute_expose() {
	if (!rfc_expose("int func_int(int)", func_int)) {
		printf("Test failed: The 'func_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int(int,int)", func_int_int)) {
		printf("Test failed: The 'func_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_int(int,int,int)", func_int_int_int)) {
		printf("Test failed: The 'func_int_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_char(int,int,char)", func_int_int_char)) {
		printf("Test failed: The 'func_int_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char(int,char)", func_int_char)) {
		printf("Test failed: The 'func_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_int(int,char,int)", func_int_char_int)) {
		printf("Test failed: The 'func_int_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_char(int,char,char)", func_int_char_char)) {
		printf("Test failed: The 'func_int_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char(char)", func_char)) {
		printf("Test failed: The 'func_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int(char,int)", func_char_int)) {
		printf("Test failed: The 'func_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_int(char,int,int)", func_char_int_int)) {
		printf("Test failed: The 'func_char_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_char(char,int,char)", func_char_int_char)) {
		printf("Test failed: The 'func_char_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char(char,char)", func_char_char)) {
		printf("Test failed: The 'func_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_int(char,char,int)", func_char_char_int)) {
		printf("Test failed: The 'func_char_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_char(char,char,char)", func_char_char_char)) {
		printf("Test failed: The 'func_char_char_char' expose returned an error code");
		exit(1);
	}
	return 1;
}

int execute_test() {
	int expected_value;
	if (!rfc_call("internal", "func_int", "int", 0)) {
		printf("Test failed: The 'func_int' call returned an error code");
		exit(1);
	}
	expected_value = 0*1;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_int", "int", 1, "int", 1)) {
		printf("Test failed: The 'func_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 1*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_int_int", "int", 2, "int", 2, "int", 2)) {
		printf("Test failed: The 'func_int_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 2*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_int_char", "int", 4, "int", 4, "char", 4)) {
		printf("Test failed: The 'func_int_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 4*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_char", "int", 11, "char", 11)) {
		printf("Test failed: The 'func_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 11*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_char_int", "int", 12, "char", 12, "int", 12)) {
		printf("Test failed: The 'func_int_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 12*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_char_char", "int", 14, "char", 14, "char", 14)) {
		printf("Test failed: The 'func_int_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 14*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char", "char", 42)) {
		printf("Test failed: The 'func_char' call returned an error code");
		exit(1);
	}
	expected_value = 42*1;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_int", "char", 43, "int", 43)) {
		printf("Test failed: The 'func_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 43*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_int_int", "char", 44, "int", 44, "int", 44)) {
		printf("Test failed: The 'func_char_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 44*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_int_char", "char", 46, "int", 46, "char", 46)) {
		printf("Test failed: The 'func_char_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 46*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_char", "char", 53, "char", 53)) {
		printf("Test failed: The 'func_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 53*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_char_int", "char", 54, "char", 54, "int", 54)) {
		printf("Test failed: The 'func_char_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 54*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_char_char", "char", 56, "char", 56, "char", 56)) {
		printf("Test failed: The 'func_char_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 56*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	return 1;
}

int main() {
	execute_expose();
	execute_test();
	return 0;
}
