#include "rfc_shared.h"
#include <malloc.h>

size_t rfc_get_buffer_size(rfc_parameter_info * root);

RFC_BYTEARRAY_TYPE * rfc_build_buffer(rfc_parameter_info * root) {
	size_t buffer_size = rfc_get_buffer_size(root);
	RFC_BYTEARRAY_TYPE * buffer = (RFC_BYTEARRAY_TYPE *) malloc(buffer_size * sizeof(RFC_BYTEARRAY_TYPE));

	rfc_parameter_info * node = root;
	size_t buffer_index = 0;

	while (node) {
		node = node->next;
	}

	return buffer;
}

size_t rfc_get_buffer_size(rfc_parameter_info * root) {
	rfc_parameter_info * node = root;
	size_t buffer_size = 0;
	buffer_size += sizeof(size_t);
	while (node) {
		buffer_size += sizeof(RFC_PARAMTYPE_TYPE);
		buffer_size += sizeof(RFC_PARAMSIZE_TYPE);

		if (node->type == RFC_INT) {
			buffer_size += node->size * sizeof(RFC_INT);
		} else if (node->type == RFC_CHAR || node->type == RFC_CHAR_ARRAY) {
			buffer_size += node->size * sizeof(RFC_CHAR);
		}
		node = node->next;
	}
	return buffer_size;
}
