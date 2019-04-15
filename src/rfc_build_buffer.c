#include <malloc.h>
#include "rfc_shared.h"
#include "rfc_get_buffer_size.c"

int rfc_build_buffer(rfc_parameter_info * root, RFC_BYTEARRAY_TYPE * buffer, int buffer_size) {
	rfc_parameter_info * node = root;
	int buffer_index = 0;

	RFC_BYTEARRAY_TYPE * buffer_end = buffer + buffer_size;
	int * int_helper;
	char * char_helper;

	int_helper = (int *) buffer;
	*int_helper = buffer_size;
	int_helper++;

	int i;
	//printf("About to build buffer %8x + %8x\n", buffer, buffer_end);
	while (node) {
		if (node->data == 0) {
			node = node->next;
			continue;
		}
		if ((RFC_BYTEARRAY_TYPE *)int_helper >= buffer_end) {
			return rfc_error_buffer_overflow("build buffer (type)");
		}
		*int_helper = node->type;
		int_helper++;
		if ((RFC_BYTEARRAY_TYPE *)int_helper >= buffer_end) {
			return rfc_error_buffer_overflow("build buffer (count)");
		}
		*int_helper = node->count;
		int_helper++;
		if (node->type == RFC_INT || node->type == RFC_INT_ARRAY) {
			if (node->type == RFC_INT && node->count != 0) {
				return rfc_error_invalid_something("count of elements on single int value");
			}
			for (i=0; i == 0 || i<node->count;i++) {
				if ((RFC_BYTEARRAY_TYPE *)int_helper >= buffer_end) {
					return rfc_error_buffer_overflow("build buffer (array)");
				}
				*int_helper = (int)(((int *)node->data)[i]);
				int_helper++;
			}
		} else if (node->type == RFC_CHAR || node->type == RFC_CHAR_ARRAY) {
			if (node->type == RFC_CHAR && node->count != 0) {
				return rfc_error_invalid_something("count of elements on single char value");
			}
			//printf("Transforming into char pointer\n");
			char_helper = (char *) int_helper;
			//printf("Attempting to advance %d characters\n", node->count);
			for (i=0; i == 0 || i<node->count;i++) {
				if ((RFC_BYTEARRAY_TYPE *)char_helper >= buffer_end) {
					return rfc_error_buffer_overflow("build buffer (array)");
				}
				*char_helper = (char)(((char *)node->data)[i]);
				char_helper++;
			}
			//printf("Done advancing\n");
			int_helper = (int *) char_helper;
		} else {
			return rfc_error_unimplemented("node type at build buffer");
		}
		node = node->next;
		if (node == 0) {
			break;
		}
	}

	return 1;
}