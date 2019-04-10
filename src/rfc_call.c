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
			return rfc_error_buffer_overflow();
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
				return rfc_error_buffer_overflow();
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