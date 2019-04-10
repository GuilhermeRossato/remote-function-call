#include "rfc_shared.h"

/**
 * Removes every occurence of a character in a null-terminated char array.
 *
 * Note that this function overwrites your buffer with the result, which is guaranteed to be the same length or smaller than the previous content, while still keeping the null-terminator-.
 *
 * @param  buffer          Buffer with the string to be read and written to
 * @param  char_to_remove  A character to be removed when it is found
 *
 * @return                 The length of the resulting buffer or negative number when there was an error
 */
int rfc_remove_char_from_string(char * buffer, char char_to_remove) {
	int i = 0;
	int j = 0;
	do {
		if (j > i) {
			return -1;
		}
		if (buffer[i] != char_to_remove) {
			buffer[j++] = buffer[i];
		}
	} while(buffer[i++] != '\0');
	if (i > 0 && buffer[i-1] != '\0') {
		buffer[i++] = '\0';
	}
	return i-1;
}