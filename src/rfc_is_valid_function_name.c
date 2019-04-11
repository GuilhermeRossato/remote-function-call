#include "rfc_shared.h"

/**
 * Checks if a string is a valid function name, returning 1 for valid values and 0 for invalid values
 *
 * @param  name  The string to be checked
 *
 * @return       Returns a integer indicating a valid function name. Returns 0 (zero) if the function is invalid, 1 if it is valid
 *
 */
int rfc_is_valid_function_name(char * name) {
	if (name == 0) {
		return 0;
	}
	if (rfc_compare_two_strings(name, "char", 10)) {
		return 0;
	}
	if (rfc_compare_two_strings(name, "int", 10)) {
		return 0;
	}
	unsigned int i = 0;
	do {
		if (i == 0 && name[i] == '\0') {
			return 0;
		}
		if (i >= 256) {
			return 0;
		}
		if (name[i] == '\0') {
			break;
		}
		if (name[i] >= 'a' && name[i] <= 'z') {
			continue;
		}
		if (name[i] >= 'A' && name[i] <= 'Z') {
			continue;
		}
		if (i > 0 && name[i] >= '0' && name[i] <= '9') {
			continue;
		}
		if (name[i] == '_') {
			continue;
		}
		return 0;
	} while (name[i++] != '\0');
	return 1;
}
