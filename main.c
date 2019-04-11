#include <stdio.h>
#include "src/rfc.h"

int main() {
	rfc_call("127.0.0.1:8080", "my_function", "int", 5, "char", 'a', "int", 3);
	return 0;
}