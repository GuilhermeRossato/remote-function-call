#include "rfc_shared.h"

int rfc_dereference_function_call(void * func, enum rfc_input_type i, unsigned char * buffer, int buffer_size) {
	void * helper = buffer;
	int * int_aux = helper;
	char * char_aux = helper;

	if (i == rfc_void) {
		int (*callback)();
		callback = func;
		return callback();
	} else if (i == rfc_int) {
		int (*callback)(int);
		callback = func;
		return callback(
			*(int *) (helper + sizeof(int) * 2)
		);
	} else if (i == rfc_char) {
		int (*callback)(char);
		callback = func;

		return callback(
			*(char *) (helper + sizeof(int) * 2)
		);
	} else if (i == rfc_int_int) {
		int (*callback)(int, int);
		callback = func;

		return callback(
			*(int *) (helper + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2)
		);
	} else if (i == rfc_int_char) {
		int (*callback)(int, char);
		callback = func;

		return callback(
			*(int *) (helper + sizeof(int) * 2),
			*(char *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2)
		);
	} else if (i == rfc_char_int) {
		int (*callback)(char, int);
		callback = func;

		return callback(
			*(char *) (helper + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2)
		);
	} else if (i == rfc_char_char) {
		int (*callback)(char, char);
		callback = func;

		return callback(
			*(char *) (helper + sizeof(int) * 2),
			*(char *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2)
		);
	} else if (i == rfc_int_int_int) {
		int (*callback)(int, int, int);
		callback = func;

		return callback(
			*(int *) (helper + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2)
		);
	} else if (i == rfc_int_int_char) {
		int (*callback)(int, int, char);
		callback = func;

		return callback(
			*(int *) (helper + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2),
			*(char *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2)
		);
	} else if (i == rfc_int_char_int) {
		int (*callback)(int, char, int);
		callback = func;

		return callback(
			*(int *) (helper + sizeof(int) * 2),
			*(char *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2)
		);
	} else if (i == rfc_int_char_char) {
		int (*callback)(int, char, char);
		callback = func;

		return callback(
			*(int *) (helper + sizeof(int) * 2),
			*(char *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2),
			*(char *) (helper + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2)
		);
	} else if (i == rfc_char_int_int) {
		int (*callback)(char, int, int);
		callback = func;

		return callback(
			*(char *) (helper + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2)
		);
	} else if (i == rfc_char_int_char) {
		int (*callback)(char, int, char);
		callback = func;

		return callback(
			*(char *) (helper + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2),
			*(char *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(int) + sizeof(int) * 2)
		);
	} else if (i == rfc_char_char_int) {
		int (*callback)(char, char, int);
		callback = func;

		return callback(
			*(char *) (helper + sizeof(int) * 2),
			*(char *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2)
		);
	} else if (i == rfc_char_char_char) {
		int (*callback)(char, char, int);
		callback = func;

		return callback(
			*(char *) (helper + sizeof(int) * 2),
			*(char *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2),
			*(char *) (helper + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2 + sizeof(char) + sizeof(int) * 2)
		);
// // POINTERS // // // // POINTERS // // // // POINTERS // // // // POINTERS // //
	} else if (i == rfc_inta_int) {
		int (*callback)(int*, int);
		callback = func;
		int f_count_value = *(int *) (helper + sizeof(int));
		int fr_count_value = f_count_value == 0 ? 1 : f_count_value;

		return callback(
			(int *) (helper + sizeof(int) * 2),
			*(int *) (helper + sizeof(int) * 2 + sizeof(int)*fr_count_value + sizeof(int) * 2)
		);
	} else if (i == rfc_chara) {
		int (*callback)(char*);
		callback = func;
		return callback(&char_aux[8]);
	} else {
		return rfc_error_insupported_something("input type on dereference function call", i);
	}
	return 0;
}