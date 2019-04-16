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
int foo7(int a, int b, int c) {
	return 1;
}
int foo8(int * a, int b, int c) {
	return 1;
}
int foo9(int a, int * b, int c) {
	return 1;
}
int foo10(int * a, int * b, int c) {
	return 1;
}
int foo11(int a, int b, int * c) {
	return 1;
}
int foo12(int * a, int b, int * c) {
	return 1;
}
int foo13(int a, int * b, int * c) {
	return 1;
}
int foo14(int * a, int * b, int * c) {
	return 1;
}

void expose_function(char * name, void * func) {
	if (!rfc_expose(name, func)) {
		printf("Test failed:\nThe '%s' expose returned an error code\n", name);
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
	expose_function("int foo7 (int , int , int )", foo7);
	expose_function("int foo8 (int*, int , int )", foo8);
	expose_function("int foo9 (int , int*, int )", foo9);
	expose_function("int foo10(int*, int*, int )", foo10);
	expose_function("int foo11(int , int , int*)", foo11);
	expose_function("int foo12(int*, int , int*)", foo12);
	expose_function("int foo12(int , int*, int*)", foo13);
	expose_function("int foo12(int*, int*, int*)", foo14);
	int buffer[2] = {0};
	if (!rfc_call("internal", "foo2", "int*", 1, buffer)) { exit(1); }
	printf("Graceful finish\n");
	return 0;
}