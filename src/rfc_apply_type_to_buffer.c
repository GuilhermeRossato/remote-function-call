#include "rfc_shared.h"
#include "rfc_put_bin_buffer.c"

int rfc_apply_char_to_buffer(RFC_BYTEARRAY_TYPE * buffer, char * values, int amount) {
	if (sizeof(char) != 1) {
		return rfc_error_insupported_something("native char size", 1);
	}
	char * buffer_as_type = (char *) buffer;
	int i;
	for(i=0; i<amount; i++) {
		buffer_as_type[i*sizeof(char)] = values[i];
	}
	return 1;
}

int rfc_apply_int_to_buffer(RFC_BYTEARRAY_TYPE * buffer, int * values, int amount) {
	if (sizeof(int) != 4) {
		return rfc_error_insupported_something("native int size", 4);
	}
	int * buffer_as_type = (int *) buffer;
	int i;
	for(i=0; i<amount; i++) {
		buffer_as_type[i*sizeof(int)] = values[i];
	}
	return 1;
}

int rfc_apply_type_to_buffer(RFC_BYTEARRAY_TYPE * buffer, RFC_PARAMTYPE_TYPE type) {
	return 0;
}