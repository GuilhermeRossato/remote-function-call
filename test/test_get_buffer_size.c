#include <stdlib.h> // exit
#include <stdio.h> // printf
#include "../src/rfc_get_buffer_size.c"

#define MAX_BUFFER_SIZE	256

int execute_unit_test_1() {
	rfc_parameter_info node;
	node.next = 0;
	node.count = 1;
	node.type = RFC_CHAR;
	int expect = sizeof(int)+sizeof(RFC_PARAMTYPE_TYPE)+sizeof(RFC_PARAMSIZE_TYPE)+sizeof(char);
	int output = rfc_get_buffer_size(&node);
	if (expect != output) {
	 	printf("Error at sub-test 1:\n");
	 	printf("Output: %d\n", output);
	 	printf("Expect: %d\n", expect);
	 	exit(1);
	}
}

int execute_unit_test_2() {
	rfc_parameter_info root, node;
	root.next = &node;
	root.count = 1;
	root.type = RFC_INT;
	node.next = 0;
	node.count = 1;
	node.type = RFC_CHAR;

	int expect = 0;
	expect += sizeof(int);
	expect += sizeof(RFC_PARAMTYPE_TYPE)+sizeof(RFC_PARAMSIZE_TYPE)+sizeof(int);
	expect += sizeof(RFC_PARAMTYPE_TYPE)+sizeof(RFC_PARAMSIZE_TYPE)+sizeof(char);

	int output = rfc_get_buffer_size(&root);
	if (expect != output) {
	 	printf("Error at sub-test 2:\n");
	 	printf("Output: %d\n", output);
	 	printf("Expect: %d\n", expect);
	 	exit(1);
	}
}

int execute_unit_test_3() {
	rfc_parameter_info a, b, c;

	a.next = &b;
	b.next = &c;
	c.next = 0;

	a.type = RFC_CHAR;
	b.type = RFC_CHAR;
	c.type = RFC_CHAR;

	a.count = 3;
	b.count = 2;
	c.count = 1;

	size_t buffer_size = rfc_get_buffer_size(&a);

	int expect = 0;
	expect += sizeof(int);
	expect += sizeof(RFC_PARAMTYPE_TYPE)+sizeof(RFC_PARAMSIZE_TYPE)+sizeof(char)*3;
	expect += sizeof(RFC_PARAMTYPE_TYPE)+sizeof(RFC_PARAMSIZE_TYPE)+sizeof(char)*2;
	expect += sizeof(RFC_PARAMTYPE_TYPE)+sizeof(RFC_PARAMSIZE_TYPE)+sizeof(char);

	if (buffer_size != expect) {
		printf("Error at sub-test 3:\n");
		printf("Output: %d\n", buffer_size);
		printf("Expect: %d\n", expect);
		exit(1);
	}
}

int main() {
	execute_unit_test_1();
	execute_unit_test_2();
	execute_unit_test_3();
	return 0;
}