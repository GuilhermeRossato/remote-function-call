#include <malloc.h>
#include "rfc_shared.h"
#include "rfc_get_buffer_size.c"
#include "rfc_apply_type_to_buffer.c"

int rfc_build_buffer(rfc_parameter_info * root, RFC_BYTEARRAY_TYPE * buffer, int buffer_size) {
	rfc_parameter_info * node = root;
	int buffer_index = 0;

	int * int_helper;
	char * char_helper;

	int_helper = (int *) buffer;
	*int_helper = buffer_size;
	int_helper++;

	int i;
	while (node) {
		*int_helper = node->type;
		int_helper++;
		*int_helper = node->count;
		int_helper++;
		if (node->type == RFC_INT) {
			for (i=0;i == 0 || i<node->count;i++) {
				*int_helper = (int)(((int *)node->data)[i]);
				int_helper++;
			}
		} else if (node->type == RFC_CHAR) {
			char_helper = (char *) int_helper;
			for (i=0;i == 0 || i<node->count;i++) {
				*char_helper = (char)(((char *)node->data)[i]);
				char_helper++;
			}
			int_helper = (int *) char_helper;
		}
		node = node->next;
	}

	return 1;
}