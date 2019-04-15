#include <stdlib.h> // exit
#include "../src/rfc_shared.h"
#include "../src/rfc_put_bin_buffer.c"
#include "../src/rfc_expose.c"
#include "../src/rfc_call_exposed_function.c"
#include "../src/rfc_build_buffer.c"

int global_value = 0;

int foo1(char a, char b) {
	global_value += a;
	global_value += b;
	return 492;
}

int foo2(int a, int b, int c) {
	global_value += a;
	global_value += b;
	global_value += c;
	return 7;
}

int execute_unit_test_1() {
	char v_a = 49;
	char v_b = 12;

	rfc_parameter_info a, b;
	a.type = RFC_CHAR;
	a.count = 0;
	a.next = &b;
	a.data = (void *) &v_a;

	b.type = RFC_CHAR;
	b.count = 0;
	b.next = 0;
	b.data = (void *) &v_b;

	size_t buffer_size = rfc_get_buffer_size(&a);
	char * buffer = (char *) malloc(sizeof(char) * buffer_size);

	if (!rfc_build_buffer(&a, buffer, buffer_size)) {
		free(buffer);
		printf("Error at sub-test 1: Could not build buffer\n");
		exit(1);
	}

	global_value = 0;
	int call_result = rfc_call_exposed_function("foo1", buffer, buffer_size);
	if (call_result != 492) {
		free(buffer);
		printf("Error at sub-test 1: Function returned incorrect value\n");
		printf("Output: %d\n", call_result);
		printf("Expect: %d\n", 492);
		exit(1);
	}

	if (global_value != v_a+v_b) {
		free(buffer);
		printf("Error at sub-test 1: The global value is incorrect\n");
		printf("Output: %d\n", global_value);
		printf("Expect: %d\n", v_a+v_b);
		exit(1);
	}

	free(buffer);
}

int execute_unit_test_2() {
	int v_a = 3;
	int v_b = 7;
	int v_c = 15;

	rfc_parameter_info a, b, c, d;
	a.type = RFC_INT;
	a.count = 0;
	a.next = &b;
	a.data = (void *) &v_a;

	b.type = RFC_INT;
	b.count = 0;
	b.next = &c;
	b.data = (void *) &v_b;

	c.type = RFC_INT;
	c.count = 0;
	c.next = 0;
	c.data = (void *) &v_c;

	size_t buffer_size = rfc_get_buffer_size(&a);
	char * buffer = (char *) malloc(sizeof(char) * buffer_size);

	if (!rfc_build_buffer(&a, buffer, buffer_size)) {
		free(buffer);
		printf("Error at sub-test 2: Could not build buffer\n");
		exit(1);
	}

	global_value = 0;
	int call_result = rfc_call_exposed_function("foo2", buffer, buffer_size);
	if (call_result != 7) {
		free(buffer);
		printf("Error at sub-test 2: Function returned incorrect value\n");
		exit(1);
	}

	if (global_value != v_a+v_b+v_c) {
		free(buffer);
		printf("Error at sub-test 2: The global value is incorrect\n");
		printf("Output: %d\n", global_value);
		printf("Expect: %d\n", v_a+v_b+v_c);
		exit(1);
	}

	free(buffer);
}

int main() {
	if (!rfc_expose("int foo1(char, char)", foo1)) {
		printf("Test failed:\nThe first expose returned an error code\n");
		exit(1);
	}
	if (!rfc_expose("int foo2(int, int, int)", foo2)) {
		printf("Test failed:\nThe second expose returned an error code\n");
		exit(1);
	}
	execute_unit_test_1();
	execute_unit_test_2();
	return 0;
}