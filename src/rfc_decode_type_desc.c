#include "rfc_shared.h"
#include "rfc_put_filtered_char_array.c"

#define RFC_MAX_TYPE_DESC_LENGTH	32

int rfc_decode_type_desc(char * rawDesc) {
	char desc[30];

	int result = rfc_put_filtered_char_array(rawDesc, ' ', desc, RFC_MAX_TYPE_DESC_LENGTH);
	if (result < 0) {
		return 0;
	}

	if (rfc_compare_two_strings(desc, "int", RFC_MAX_TYPE_DESC_LENGTH)) {
		return RFC_INT;
	} else if (rfc_compare_two_strings(desc, "char", RFC_MAX_TYPE_DESC_LENGTH)) {
		return RFC_CHAR;
	} else if (rfc_compare_two_strings(desc, "char*", RFC_MAX_TYPE_DESC_LENGTH)) {
		return RFC_CHAR_ARRAY;
	} else {
		return 0;
	}
}