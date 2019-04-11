#include "rfc_shared.h"

/**
 * Convert a binary buffer (array) into a string array, but written in binary with 0 and 1 (digits) and each byte separated by a space.
 *
 * The function can also print the binary result instead of writing to a buffer if the 'buffer_length' parameter is equal to zero.
 *
 * @param  buffer_to_convert         The source buffer to convert to binary
 * @param  buffer_to_convert_length  The number of bytes in the buffer to be processed
 * @param  buffer_to_save            An output char array buffer that will be written to with binary digits
 * @param  buffer_to_save_length     The maximum length of the 'buffer_to_save' needs to be at least 9 times the 'buffer_to_convert_length' parameter
 *
 * @return                           A success indicator if successful (usually 1) or an error indicator otherwise
 */
int rfc_put_bin_buffer(
	char * buffer_to_convert,
	size_t buffer_to_convert_length,
	char * buffer_to_save,
	size_t buffer_to_save_length
) {
	unsigned char *b = (unsigned char*) buffer_to_convert;
	unsigned char byte;
	int output_size = buffer_to_convert_length*9+1;
	int print_instead_of_put = (buffer_to_save_length == 0);

	if (!print_instead_of_put && buffer_to_save_length <= output_size) {
		return rfc_error_buffer_overflow("binary buffer");
	}

	int outputIndex = 0;
	int i, j;

	for (i = 0 ; i < buffer_to_convert_length; i++)
	{
		if (i != 0) {
			if (print_instead_of_put) {
				printf(" ");
			} else {
				buffer_to_save[outputIndex++] = ' ';
			}
		}
		for (j=7; j>=0; j--)
		{
			byte = (b[i] >> j) & 1;

			if (print_instead_of_put) {
				printf("%d", byte);
			} else {
				if (outputIndex >= buffer_to_save_length) {
					return rfc_error_buffer_overflow("binary buffer");
				}
				buffer_to_save[outputIndex++] = '0'+byte;
			}
		}
	}
	if (!print_instead_of_put) {
		if (outputIndex >= buffer_to_save_length) {
			return rfc_error_buffer_overflow("binary buffer");
		}
		buffer_to_save[outputIndex] = '\0';
	}
	return 1;
}

/**
 * Print a binary array (with printf to stdout) as numeric digits (0 or 1) with bytes separated by space without a trailing newline
 *
 * @param  buffer_to_print         The source buffer to be convert to binary
 * @param  buffer_to_print_length  The number of bytes to be processed
 *
 * @return                         A success indicator if successful (usually 1) or an error indicator otherwise
 */
int rfc_print_bin_buffer(
	char * buffer_to_print,
	size_t buffer_to_print_length
) {
	return rfc_put_bin_buffer(buffer_to_print, buffer_to_print_length, 0, 0);
}