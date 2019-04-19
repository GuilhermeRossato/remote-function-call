#include <stdlib.h> // exit
#include "../src/rfc_shared.h"
#include "../src/rfc_call.c"
#include "../src/rfc_expose.c"

int global_value = 0;

void expose_function(char * descriptor, void * func) {
	if (!rfc_expose(descriptor, func)) {
		printf("Test failed:\nThe '%s' expose returned an error code\n", descriptor);
		exit(1);
	}
}

int get_sum(int * array, int array_length) {
	int sum = 0;
	for (int i = 0; i < array_length; i++) {
		sum += array[i];
	}
	return sum;
}

int execute_test_1() {
	int buffer[] = {1,7,3,2,5};
	int buffer_size = sizeof(buffer) / sizeof(int);
	expose_function("int get_sum(int *)", get_sum);
	int result = rfc_call("internal", "get_sum", "int*", buffer, buffer_size);
	int sum = 0;
	for (int i = 0; i < buffer_size; i++) {
		sum += buffer[i];
	}
	if (sum != result) {
		printf("Test 1 failed:\nThe return value was unexpected\n");
		printf("Output: %d\n", result);
		printf("Expect: %d\n", sum);
		exit(1);
	}
}

int multiply_and_sum_arrays(int * array1, int * array2, int array1_length, int array2_length) {
	int sum = 0;
	for (int i = 0; i < array1_length || i < array2_length; i++) {
		int value = 1;
		if (i < array1_length) {
			value = value * array1[i];
		}
		if (i < array2_length) {
			value = value * array2[i];
		}
		sum += value;
	}

	return sum;
}

int execute_test_2() {
	int buffer_a[] = {1,7,3,2};
	int buffer_b[] = {2,3};

	int buffer_a_size = sizeof(buffer_a) / sizeof(int);
	int buffer_b_size = sizeof(buffer_b) / sizeof(int);

	int expected = buffer_a[0]*buffer_b[0] + buffer_a[1]*buffer_b[1] + buffer_a[2] + buffer_a[3];

	expose_function("int multiply_and_sum_arrays(int *, int *)", multiply_and_sum_arrays);
	int result = rfc_call(
		"internal",
		"multiply_and_sum_arrays",
		"int*",
		buffer_a,
		buffer_a_size,
		"int*",
		buffer_b,
		buffer_b_size
	);

	if (expected != result) {
		printf("Test 2 failed:\nThe return value was unexpected\n");
		printf("Output: %d\n", result);
		printf("Expect: %d\n", expected);
		exit(1);
	}
}

int multiple_array_sum(int * a, int * b, int * c, int * d, int alen, int blen, int clen, int dlen) {
	int sum = 0;
	for (int i = 0; i < alen; i++) {
		sum += a[i];
	}
	for (int i = 0; i < blen; i++) {
		sum += b[i];
	}
	for (int i = 0; i < clen; i++) {
		sum += c[i];
	}
	for (int i = 0; i < dlen; i++) {
		sum += d[i];
	}
	return sum;
}

int execute_test_3() {
	int a[] = {1,7,3,2};
	int b[] = {0, 2};
	int c[] = {1, -1, 9};
	int d[] = {2,3,4,6,749};

	int a_size = sizeof(a) / sizeof(int);
	int b_size = sizeof(b) / sizeof(int);
	int c_size = sizeof(c) / sizeof(int);
	int d_size = sizeof(d) / sizeof(int);

	int expected = 0;

	for (int i = 0; i < a_size || i < b_size || i < c_size || i < d_size ; i++) {
		expected += (i < a_size) ? a[i] : 0;
		expected += (i < b_size) ? b[i] : 0;
		expected += (i < c_size) ? c[i] : 0;
		expected += (i < d_size) ? d[i] : 0;
	}

	expose_function("int multiple_array_sum(int *, int *, int*, int*)", multiple_array_sum);

	int result = rfc_call(
		"internal",
		"multiple_array_sum",
		"int*",
		a,
		a_size,
		"int*",
		b,
		b_size,
		"int*",
		c,
		c_size,
		"int*",
		d,
		d_size
	);

	if (expected != result) {
		printf("Test 3 failed:\nThe return value was unexpected\n");
		printf("Output: %d\n", result);
		printf("Expect: %d\n", expected);
		exit(1);
	}
}

int main() {
	execute_test_1();
	execute_test_2();
	execute_test_3();
	return 0;
}