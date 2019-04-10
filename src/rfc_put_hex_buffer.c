#include "rfc_shared.h"

/**
 * Convert a binary buffer (array) into its hexadecimal representation with each byte separated by space, in a given char array
 *
 * The function can also print the hexadecimal result instead of writing to a buffer if the 'buffer_length' parameter is equal to zero.
 *
 * @param  buffer_to_convert         The source buffer to convert to hex
 * @param  buffer_to_convert_length  The number of bytes in the buffer to be processed
 * @param  buffer_to_save            An output char array buffer that will be written to with hex duples separated by spaces
 * @param  buffer_to_save_length     The maximum length of the 'buffer_to_save' needs to be at least 3 times the 'buffer_to_convert_length' parameter
 *
 * @return                           A success indicator if successful (usually 1) or an error indicator otherwise
 */
int rfc_put_hex_buffer(
	char * buffer_to_convert,
	size_t buffer_to_convert_length,
	char * buffer_to_save,
	size_t buffer_to_save_length
) {
	unsigned char * b = (unsigned char *) buffer_to_save;
	int output_size = buffer_to_convert_length*3+1;
	int print_instead_of_put = (buffer_to_save_length == 0);

	if (!print_instead_of_put && buffer_to_save_length <= output_size) {
		return rfc_error_buffer_overflow();
	}

	char hexDigits[4];

	int i;
	for (i = 0; i < buffer_to_convert_length; i++)
	{
		snprintf(hexDigits, 3, "%02X", (unsigned char) buffer_to_convert[i]);

		if (print_instead_of_put) {
			if (i == 0) {
				printf("%s", hexDigits);
			} else {
				printf(" %s", hexDigits);
			}
		} else {
			if ((i*3+2) >= buffer_to_save_length) {
				return rfc_error_buffer_overflow();
			}
			if (i > 0) {
				b[i*3-1] = ' ';
			}
			b[i*3] = hexDigits[0];
			b[i*3+1] = hexDigits[1];
			b[i*3+2] = '\0';
		}
	}
	return 1;
}

/**
 * Print a hexadecimal array (with printf to stdout) as numeric digits (0 or 1) with bytes separated by space without a trailing newline
 *
 * @param  buffer_to_print         The source buffer to be convert to hexadecimal
 * @param  buffer_to_print_length  The number of bytes to be processed
 *
 * @return                         A success indicator if successful (usually 1) or an error indicator otherwise
 */
int rfc_print_hex_buffer(
	char * buffer_to_print,
	size_t buffer_to_print_length
) {
	return rfc_put_hex_buffer(buffer_to_print, buffer_to_print_length, 0, 0);
}