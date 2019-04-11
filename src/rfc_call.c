#include "rfc_shared.h"

#define rfc_call(...) _rfc_internal_call_function(__VA_ARGS__, 0)

int _rfc_internal_call_function(char * connection_str, ...) {
	va_list ap;
	va_start(ap, connection_str);

	// Handle connection string, hostname and port.
	if (connection_str[0] != '1' || connection_str[1] != '2' || connection_str[2] != '7') {
		va_end(ap);
		return rfc_error_invalid_something("connection string");
	}

	if (strnlen(connection_str, RFC_HOST_BUFFER_SIZE) >= RFC_HOST_BUFFER_SIZE-1) {
		va_end(ap);
		return rfc_error_invalid_something("connection string");
	}

	rfc_connection_data data;

	int successCode = rfc_fill_connection_data_from_string(connection_str, &data);
	if (!successCode) {
		va_end(ap);
		return successCode;
	}

	printf("connection str: %s\n", connection_str);
	printf("host: %s\n", data.host);
	printf("port: %d\n", data.port);

	// Handle function name

	char * function_name = va_arg(ap, char *);

	if (!rfc_is_valid_function_name(function_name)) {
		va_end(ap);
		return rfc_error_invalid_something("function name");
	}

	printf("function name: %s\n", function_name);

	// Buffer parameters
	int state = 0;
	char * last_type_string;
	int last_type_id;
	while (1) {
		if (state == 0) {
			last_type_string = va_arg(ap, char *);
			if (last_type_string == 0 || last_type_string == '\0') {
				printf("Gracefull exit\n");
				break;
			}
			state = 1;
		} else if (state == 1) {
			printf("%s: ", last_type_string);
			last_type_id = rfc_decode_type_desc(last_type_string);
			if (last_type_id == RFC_INT) {
				printf("%d", va_arg(ap, int));
				state = 0;
			} else if (last_type_id == RFC_CHAR) {
				printf("%c", (char) va_arg(ap, int));
				state = 0;
			} else {
				printf("\n");
				va_end(ap);
				return rfc_error_invalid_something("function parameter");
			}
			printf("\n");
		}
	}
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