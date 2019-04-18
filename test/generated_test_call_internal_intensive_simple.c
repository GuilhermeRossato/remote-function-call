/**
 * This file was generated automatically by the command "npm run generate-intensive-call-test".
 * Refrain from changing it manually.
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
int func_int_int_int_int(int a, int b, int c, int d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_int_int_int_char(int a, int b, int c, char d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_int_int_char(int a, int b, char c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_int_int_char_int(int a, int b, char c, int d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_int_int_char_char(int a, int b, char c, char d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
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
int func_int_char_int_int(int a, char b, int c, int d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_int_char_int_char(int a, char b, int c, char d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_int_char_char(int a, char b, char c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_int_char_char_int(int a, char b, char c, int d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_int_char_char_char(int a, char b, char c, char d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
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
int func_char_int_int_int(char a, int b, int c, int d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_char_int_int_char(char a, int b, int c, char d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_char_int_char(char a, int b, char c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_char_int_char_int(char a, int b, char c, int d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_char_int_char_char(char a, int b, char c, char d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
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
int func_char_char_int_int(char a, char b, int c, int d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_char_char_int_char(char a, char b, int c, char d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_char_char_char(char a, char b, char c) {
	global_value = ((int) a)+((int) b)+((int) c);
	return 1;
}
int func_char_char_char_int(char a, char b, char c, int d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_char_char_char_char(char a, char b, char c, char d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d);
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
	} else if (!rfc_expose("int func_int_int_int_int(int,int,int,int)", func_int_int_int_int)) {
		printf("Test failed: The 'func_int_int_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_int_char(int,int,int,char)", func_int_int_int_char)) {
		printf("Test failed: The 'func_int_int_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_char(int,int,char)", func_int_int_char)) {
		printf("Test failed: The 'func_int_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_char_int(int,int,char,int)", func_int_int_char_int)) {
		printf("Test failed: The 'func_int_int_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_char_char(int,int,char,char)", func_int_int_char_char)) {
		printf("Test failed: The 'func_int_int_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char(int,char)", func_int_char)) {
		printf("Test failed: The 'func_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_int(int,char,int)", func_int_char_int)) {
		printf("Test failed: The 'func_int_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_int_int(int,char,int,int)", func_int_char_int_int)) {
		printf("Test failed: The 'func_int_char_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_int_char(int,char,int,char)", func_int_char_int_char)) {
		printf("Test failed: The 'func_int_char_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_char(int,char,char)", func_int_char_char)) {
		printf("Test failed: The 'func_int_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_char_int(int,char,char,int)", func_int_char_char_int)) {
		printf("Test failed: The 'func_int_char_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_char_char(int,char,char,char)", func_int_char_char_char)) {
		printf("Test failed: The 'func_int_char_char_char' expose returned an error code");
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
	} else if (!rfc_expose("int func_char_int_int_int(char,int,int,int)", func_char_int_int_int)) {
		printf("Test failed: The 'func_char_int_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_int_char(char,int,int,char)", func_char_int_int_char)) {
		printf("Test failed: The 'func_char_int_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_char(char,int,char)", func_char_int_char)) {
		printf("Test failed: The 'func_char_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_char_int(char,int,char,int)", func_char_int_char_int)) {
		printf("Test failed: The 'func_char_int_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_char_char(char,int,char,char)", func_char_int_char_char)) {
		printf("Test failed: The 'func_char_int_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char(char,char)", func_char_char)) {
		printf("Test failed: The 'func_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_int(char,char,int)", func_char_char_int)) {
		printf("Test failed: The 'func_char_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_int_int(char,char,int,int)", func_char_char_int_int)) {
		printf("Test failed: The 'func_char_char_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_int_char(char,char,int,char)", func_char_char_int_char)) {
		printf("Test failed: The 'func_char_char_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_char(char,char,char)", func_char_char_char)) {
		printf("Test failed: The 'func_char_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_char_int(char,char,char,int)", func_char_char_char_int)) {
		printf("Test failed: The 'func_char_char_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_char_char(char,char,char,char)", func_char_char_char_char)) {
		printf("Test failed: The 'func_char_char_char_char' expose returned an error code");
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

	if (!rfc_call("internal", "func_int_int_int_int", "int", 3, "int", 3, "int", 3, "int", 3)) {
		printf("Test failed: The 'func_int_int_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 3*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_int_int_char", "int", 5, "int", 5, "int", 5, "char", 5)) {
		printf("Test failed: The 'func_int_int_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 5*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_int_char", "int", 12, "int", 12, "char", 12)) {
		printf("Test failed: The 'func_int_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 12*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_int_char_int", "int", 13, "int", 13, "char", 13, "int", 13)) {
		printf("Test failed: The 'func_int_int_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 13*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_int_char_char", "int", 15, "int", 15, "char", 15, "char", 15)) {
		printf("Test failed: The 'func_int_int_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 15*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_char", "int", 43, "char", 43)) {
		printf("Test failed: The 'func_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 43*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_char_int", "int", 44, "char", 44, "int", 44)) {
		printf("Test failed: The 'func_int_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 44*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_char_int_int", "int", 45, "char", 45, "int", 45, "int", 45)) {
		printf("Test failed: The 'func_int_char_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 45*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_char_int_char", "int", 47, "char", 47, "int", 47, "char", 47)) {
		printf("Test failed: The 'func_int_char_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 47*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_char_char", "int", 54, "char", 54, "char", 54)) {
		printf("Test failed: The 'func_int_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 54*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_char_char_int", "int", 55, "char", 55, "char", 55, "int", 55)) {
		printf("Test failed: The 'func_int_char_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 55*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_int_char_char_char", "int", 57, "char", 57, "char", 57, "char", 57)) {
		printf("Test failed: The 'func_int_char_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 57*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char", "char", 43)) {
		printf("Test failed: The 'func_char' call returned an error code");
		exit(1);
	}
	expected_value = 43*1;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_int", "char", 44, "int", 44)) {
		printf("Test failed: The 'func_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 44*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_int_int", "char", 45, "int", 45, "int", 45)) {
		printf("Test failed: The 'func_char_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 45*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_int_int_int", "char", 46, "int", 46, "int", 46, "int", 46)) {
		printf("Test failed: The 'func_char_int_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 46*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_int_int_char", "char", 48, "int", 48, "int", 48, "char", 48)) {
		printf("Test failed: The 'func_char_int_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 48*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_int_char", "char", 55, "int", 55, "char", 55)) {
		printf("Test failed: The 'func_char_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 55*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_int_char_int", "char", 56, "int", 56, "char", 56, "int", 56)) {
		printf("Test failed: The 'func_char_int_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 56*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_int_char_char", "char", 58, "int", 58, "char", 58, "char", 58)) {
		printf("Test failed: The 'func_char_int_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 58*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_char", "char", 86, "char", 86)) {
		printf("Test failed: The 'func_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 86*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_char_int", "char", 87, "char", 87, "int", 87)) {
		printf("Test failed: The 'func_char_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 87*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_char_int_int", "char", 88, "char", 88, "int", 88, "int", 88)) {
		printf("Test failed: The 'func_char_char_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 88*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_char_int_char", "char", 90, "char", 90, "int", 90, "char", 90)) {
		printf("Test failed: The 'func_char_char_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 90*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_char_char", "char", 97, "char", 97, "char", 97)) {
		printf("Test failed: The 'func_char_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 97*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_char_char_int", "char", 98, "char", 98, "char", 98, "int", 98)) {
		printf("Test failed: The 'func_char_char_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 98*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	if (!rfc_call("internal", "func_char_char_char_char", "char", 100, "char", 100, "char", 100, "char", 100)) {
		printf("Test failed: The 'func_char_char_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 100*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_char_char' call did not change the global value as expected");
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
