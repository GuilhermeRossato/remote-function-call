#ifndef RFC_GET_BUFFER_SIZE
#define RFC_GET_BUFFER_SIZE

#include "rfc_shared.h"

int rfc_get_buffer_size(rfc_parameter_info * root) {
	rfc_parameter_info * node = root;
	int buffer_size = 0;
	int count;
	buffer_size += sizeof(int);
	while (node) {
		if (node->data == 0) {
			node = node->next;
			continue;
		}
		buffer_size += sizeof(RFC_PARAMTYPE_TYPE);
		buffer_size += sizeof(RFC_PARAMSIZE_TYPE);
		count = node->count == 0 ? 1 : node->count;

		if (node->type == RFC_INT || node->type == RFC_INT_ARRAY) {
			buffer_size += count * sizeof(int);
		} else if (node->type == RFC_CHAR || node->type == RFC_CHAR_ARRAY) {
			buffer_size += count * sizeof(char);
		} else {
			return rfc_error_unimplemented("node type at get buffer size");
		}
		node = node->next;
	}
	return buffer_size;
}

#endif