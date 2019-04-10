#include "rfc_shared.h"

/**
 * Copies a null-terminated char array skipping every occurence of a character to another null-terminated char array
 * @param  buffer                 Source buffer with the chars to be removed
 * @param  char_to_remove         Character to be skipped when copying
 * @param  buffer_to_save         Destination buffer to save the new string (null-terminated char array)
 * @param  buffer_to_save_length  The max length of the buffer_to_save_length
 * @return                        The bytes written to buffer_to_save or zero if there was an error.
 */
int rfc_put_filtered_char_array(char * buffer, char char_to_remove, char * buffer_to_save, size_t buffer_to_save_length) {
	int i = 0;
	int j = 0;
	do {
		if (j > i) {
			return 0;
		}
		if (buffer[i] != char_to_remove) {
			if (j >= buffer_to_save_length) {
				return 0;
			}
			buffer_to_save[j++] = buffer[i];
		}
	} while(buffer[i++] != '\0');
	if (j > 0 && buffer[j-1] != '\0') {
		if (j >= buffer_to_save_length) {
			return 0;
		}
		buffer_to_save[j++] = '\0';
	}
	return j-1;
}