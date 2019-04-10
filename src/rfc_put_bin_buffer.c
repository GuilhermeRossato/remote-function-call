#include "rfc_shared.h"

int rfc_put_bin_buffer(
	char * buffer_to_convert,
	size_t buffer_to_convert_length,
	char * buffer_to_save,
	size_t buffer_to_save_length
) {
	unsigned char *b = (unsigned char*) buffer_to_convert;
	unsigned char byte;
	int output_size = buffer_to_convert_length*8;
	int print_instead_of_save = (buffer_to_save_length == 0);

	if (!print_instead_of_save && buffer_to_save_length <= output_size) {
		return rfc_error_buffer_overflow();
	}

	int outputIndex = 0;
	int i, j;

	for (i = 0 ; i < buffer_to_convert_length; i++)
	{
		if (i != 0) {
			if (print_instead_of_save) {
				printf(" ");
			} else {
				buffer_to_save[outputIndex++] = ' ';
			}
		}
		for (j=7; j>=0; j--)
		{
			byte = (b[i] >> j) & 1;

			if (print_instead_of_save) {
				printf("%d", byte);
			} else {
				if (outputIndex >= buffer_to_save_length) {
					return rfc_error_buffer_overflow();
				}
				buffer_to_save[outputIndex++] = '0'+byte;
			}
		}
	}
	if (!print_instead_of_save) {
		if (outputIndex >= buffer_to_save_length) {
			return rfc_error_buffer_overflow();
		}
		buffer_to_save[outputIndex] = '\0';
	}
	return 1;
}

int rfc_print_bin_buffer(
	char * buffer_to_convert,
	size_t buffer_to_convert_length
) {
	return rfc_put_bin_buffer(buffer_to_convert, buffer_to_convert_length, 0, 0);
}