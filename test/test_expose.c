#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_shared.h"
#include "../src/rfc_put_bin_buffer.c"
#include "../src/rfc_expose.c"

int value;

int foo1(int a) {
	value += a;
	return 7;
}

int foo2(int * n, int n_length) {
	value += n_length;
	return 5;
}

int main() {
	if (rfc_func_root.func != 0) {
		printf("Test failed at sub-test 1:\nRoot function node is not null\n");
		exit(1);
	}
	if (!rfc_expose("int foo1(int)", foo1)) {
		printf("Test failed at sub-test 2:\nThe first expose returned an error code\n");
		exit(1);
	}
	if (rfc_func_root.func == 0) {
		printf("Test failed at sub-test 3:\nRoot function node is still null after expose\n");
		exit(1);
	}
	if (rfc_func_root.next != 0) {
		printf("Test failed at sub-test 4:\nRoot function node has next, but the list should only have one entry\n");
		exit(1);
	}
	if (!rfc_expose("int foo2(int*, int)", foo2)) {
		printf("Test failed at sub-test 5:\nThe second expose returned an error code\n");
		exit(1);
	}
	if (rfc_func_root.next == 0) {
		printf("Test failed at sub-test 6:\nRoot function node is still null after expose\n");
		exit(1);
	}
	if (rfc_func_root.next->func == 0) {
		printf("Test failed at sub-test 7:\nThe second function node is null after second expose\n");
		exit(1);
	}
	value = 0;
	int (*fun_1)(int);
	int (*fun_2)(int*, int);

	fun_1 = rfc_func_root.func;
	fun_2 = rfc_func_root.next->func;

	if (fun_1(3) != 7) {
		printf("Test failed at sub-test 8:\nThe root exposed function foo1 returned an unexpected number\n");
		exit(1);
	}
	if (fun_2(0, 4) != 5) {
		printf("Test failed at sub-test 9:\nThe second exposed function foo2 returned an unexpected number\n");
		exit(1);
	}
	if (value != 3+4) {
		printf("Test failed at sub-test 10:\nThe operation of both functions did not change the global value correctly\n");
		exit(1);
	}

	return 0;
}