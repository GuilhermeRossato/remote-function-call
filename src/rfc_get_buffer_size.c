#ifndef RFC_GET_BUFFER_SIZE
#define RFC_GET_BUFFER_SIZE

#include "rfc_shared.h"

int rfc_get_buffer_size(rfc_parameter_info * root) {
	rfc_parameter_info * node = root;
	int buffer_size = 0;
	buffer_size += sizeof(int);
	while (node) {
		buffer_size += sizeof(RFC_PARAMTYPE_TYPE);
		buffer_size += sizeof(RFC_PARAMSIZE_TYPE);

		if (node->type == RFC_INT) {
			buffer_size += node->count * sizeof(int);
		} else if (node->type == RFC_CHAR || node->type == RFC_CHAR_ARRAY) {
			buffer_size += node->count * sizeof(char);
		}
		node = node->next;
	}
	return buffer_size;
}

#endif