
int rfc_fill_connection_data_from_string(rfc_connection_data * ptr, char * string) {
	if (ptr == 0 || string == 0) {
		return rfc_error_invalid_parameter();
	}
	int len = strnlen(string, RFC_HOST_BUFFER_SIZE+1);
	if (len <= 1 || len >= RFC_HOST_BUFFER_SIZE) {
		return rfc_error_invalid_connection_string();
	}
	int i = 0;
	int state = 0;
	char portBuffer[7];
	do {
		if (state == 0) {
			if (string[i] == ':') {
				state = 1;
				ptr->host[i] = '\0';
			} else if (string[i] == '\n' || string[i] == '\r') {
				return rfc_error_invalid_connection_string();
			} else {
				ptr->host[i] = string[i];
			}
		} else if (state > 0 && state < 7) {
			if ((string[i] >= '0' && string[i] <= '9') || string[i] == '\0') {
				portBuffer[state-1] = string[i];
			} else {
				return rfc_error_invalid_connection_string();
			}
		} else {
			return rfc_error_invalid_connection_string();
		}
	} while (string[i++] != '\0');

	return 1;
}

int rfc_print_bin_buffer(char * buffer, size_t length) {
    unsigned char *b = (unsigned char*) buffer;
    unsigned char byte;
    int i, j;

    for (i = length-1 ; i>=0 ; i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}

int rfc_print_hex_buffer(char * buffer, size_t length) {
	int width = 4;

	int column = 0;
	int i;
	for (i = 0; i < length; i++)
	{
		if (column == 0) {
			printf("%02X - ", i);
		}
		printf("%02X ", buffer[i]);
		if (column+1 >= width) {
			printf("\n");
			column = 0;
		} else {
			column++;
		}
	}
	if (column != 0) {
		printf("\n");
	}
}

int rfc_is_valid_function_name(char * name) {
	unsigned int i = 0;
	do {
		if (i == 0 && name[i] == '\0') {
			return 0;
		}
		if (i >= 512) {
			return 0;
		}
		if (name[i] == '\0') {
			continue;
		}
		if (name[i] >= 'a' && name[i] <= 'a') {
			continue;
		}
		if (name[i] >= 'A' && name[i] <= 'Z') {
			continue;
		}
		if (i >= 0 && name[i] >= '0' && name[i] <= '9') {
			continue;
		}
		if (name[i] == '_') {
			continue;
		}
	} while (name[i++] != '\0');
	return 1;
}

int rfc_call(int parameter_length, ...) {
	va_list ap;
	va_start(ap, parameter_length);

	char * hostname = va_arg(ap, char *);

	if (hostname[0] != '1' || hostname[1] != '2' || hostname[2] != '7') {
		va_end(ap);
		return rfc_error_invalid_hostname();
	}
	if (strnlen(hostname, 512) >= 511) {
		va_end(ap);
		return rfc_error_hostname_too_large();
	}

	int port = va_arg(ap, int);
	if (port > 256*256) {
		va_end(ap);
		return rfc_error_port_too_high();
	}

	char * function_name = va_arg(ap, char *);

	if (!rfc_is_valid_function_name(function_name)) {
		va_end(ap);
		return rfc_error_invalid_function_name();
	}

	char buffer[RFC_MAX_SEND_BUFFER_SIZE];
	int buffer_index = 0;
	int i;
	int parameter_type;

	void * buffer_position;
	int * int_ptr;

	for (i=3;i<parameter_length;i++) {
		if (buffer_index >= RFC_MAX_SEND_BUFFER_SIZE) {
			return rfc_error_send_buffer_overflow();
		}
		parameter_type = va_arg(ap, int);
		if (parameter_type == RFC_INT) {
			int_ptr = (int *) ( (void *) buffer + buffer_index);
			*int_ptr = RFC_INT;
			buffer_index += sizeof(int);

			int_ptr = (int *) ( (void *) buffer + buffer_index);
			*int_ptr = va_arg(ap, int);
			buffer_index += sizeof(int) + sizeof(int);
			i++;
		} else if (parameter_type == RFC_CHAR) {
			buffer_index += sizeof(int) + sizeof(char);
		} else if (parameter_type == RFC_CHAR_ARRAY) {
			char * string_parameter = va_arg(ap, char *);
			int string_length = strnlen(string_parameter, RFC_MAX_SEND_BUFFER_SIZE);
			buffer_index += sizeof(int) + string_length + 1;
			if (buffer_index >= RFC_MAX_SEND_BUFFER_SIZE) {
				va_end(ap);
				return rfc_error_send_buffer_overflow();
			}
		}
	}-
	rfc_print_hex_buffer(buffer, buffer_index);
	va_end(ap);
	return 1;
}


/*

int my_local_function(int x, int y) {

}


resource = rfc_open();
rfc_exec(resource, 1, 2);
rfc_close(resource);


rfc_open("127.0.0.1", 8081);

rfc_call(resource, "my_local_function", RFC_INT, 1, RFC_INT, 3);

rfc_call("127.0.0.1", 8081, "my_local_function", RFC_INT, 1, RFC_INT, 2);
*/