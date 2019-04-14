#include <stdlib.h> // exit
#include <string.h> // strncmp
#include <stdio.h> // printf
#include "../src/rfc_shared.h"
#include "../src/rfc_put_bin_buffer.c"
#include "../src/rfc_expose.c"

#define BUFFER_VERS_ADDR	0
#define BUFFER_SIZE_ADDR	1

int foo1(int a) {
	printf("Foo is %d\n", a);
	return 7;
}

int foo2(int * n, int n_length) {
	//rfc_print_bin_buffer((char *) n, sizeof(int));
	printf("Foo2 - %d arguments, starting with %d\n", n_length, n[0]);
}

int main() {
	rfc_expose("int foo1(int)", foo1);
	rfc_expose("int foo2(int*, int)", foo2);


	/*
	char buffer[256];

	buffer[BUFFER_VERS_ADDR] = 1;
	buffer[BUFFER_SIZE_ADDR] = 3;
	buffer[2] = RFC_INT;
	int * aux = (int *) &buffer[2];
	aux = aux + 1;
	*aux = 1;
	aux = aux + 1;
	*aux = 77;
	*(aux+1) = 10;

	rfc_print_bin_buffer(&buffer[3], sizeof(int));
	printf("\n");

	printf("Seding length %d\n", (int) buffer[3+sizeof(int)-1]);
	printf("And then %d\n", (int) buffer[3+sizeof(int)*2-1]);

	rfc_call_exposed_function("foo2", &buffer[3]);

	*/

	return 0;
}