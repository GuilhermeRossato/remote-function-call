#include <stdlib.h> // exit
#include "../src/rfc_shared.h"
#include "../src/rfc_call.c"
#include "../src/rfc_expose.c"

int global_value = 0;

int foo1(int a) {
	return 1;
}
int foo2(int * a) {
	return 1;
}
int foo3(int a, int b) {
	return 1;
}
int foo4(int * a, int b) {
	return 1;
}
int foo5(int a, int * b) {
	return 1;
}
int foo6(int * a, int * b) {
	return 1;
}

void expose_function(char * descriptor, void * func) {
	if (!rfc_expose(descriptor, func)) {
		printf("Test failed:\nThe '%s' expose returned an error code\n", descriptor);
		exit(1);
	}
}

void assert_value(char * function, int result) {
	if (!result) {
		printf("Test failed:\nThe '%s' call returned an error code\n", function);
		exit(1);
	}
}

int main() {
	expose_function("int foo1 (int )", foo1);
	expose_function("int foo2 (int*)", foo2);
	expose_function("int foo3 (int , int )", foo3);
	expose_function("int foo4 (int*, int )", foo4);
	expose_function("int foo5 (int , int*)", foo5);
	expose_function("int foo6 (int*, int*)", foo6);
	int buffer[32] = {0};
	buffer[14] = 13;
	buffer[14+7] = 12;
	assert_value("foo1", rfc_call("internal", "foo1", "int", buffer[14]));
	assert_value("foo2", rfc_call("internal", "foo2", "int*", &buffer[14], 8));
	assert_value("foo3", rfc_call("internal", "foo3", "int", buffer[14], "int", buffer[14+7]));
	assert_value("foo4", rfc_call("internal", "foo4", "int*", &buffer[14], 8, "int", buffer[14+7]));
	assert_value("foo5", rfc_call("internal", "foo5", "int", &buffer[14], "int*", &buffer[14], 8));
	assert_value("foo6", rfc_call("internal", "foo6", "int*", &buffer[14], 8, "int*", &buffer[14], 8));
	return 0;
}