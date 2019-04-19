<p align="center"><img src="https://github.com/GuilhermeRossato/remote-function-call/blob/master/docs/logo.png?raw=true" alt="Remote Function Call Logo"/></p>
<p align="center">:computer: A simple Remote Function Call server and client implemented in native C :calling:</p>

This library allows you to define c functions and expose them through the network interface (locally or not) so that other programs can call them, providing parameters almost as if they were defined locally.

## Use cases

- Distributed programming (multiple programs trying to solve a large distributed problem)
- Parallel programming (multiple programs calling functions from the same computer)
- Internet of Things (simple programs calling a powerful server for saving data or sending notifications)

## Example

Imagine you had a bank system and you have the following deposit function:

```c
int deposit_money(char * name, double value) {
	struct bank_account * account = find_account_by_name(name);
	if (account == 0) {
		return 0;
	}
	account->money += value;
	return 1;
}
```

To expose this function to be called from another program running in another machine you would need to create the network connection, create a interface for sending and receiving the request, decode the parameters and finally call the function manually from within your code.

All of that creates a lot of overhead, especially if you just want to send simple parameters, which is the case for IOT, a sensor only needs to send about 3 integers to a server to save these values, do you really need all that?

RFC works by abstracting everything between the function call and the server.

However, since C is a little rigid, you have to call the function defining its types, in the following way:

```c

char message[] = "John";

rfc_call("127.0.0.1", "deposit_money", "char*", message, strlen(message)+1, 10.46);

```

So we specified the host (127.0.0.1), the name of the exposed function (which has to be formally exposed at the server program), the type and value of each parameter, noting that since the string has multiple `char` elements, the length of the buffer must be passed.

## Full Example

Imagine you have an application that saves data from a sensor running in an ESP32, connected through the network.

At your main server, where data is being stored, the following program is being executed:

```c
#include <stdlib.h>
#include "rfc.h"

#define DEBUG 1

int save_reading(int reading) {
	FILE * fp = fopen("data.csv", "a");
	fprintf(fp, "%d\n", reading);
	fclose(fp);
	return 1;
}

void main() {
	rfc_expose("int save_reading(double)", save_reading);

	if (DEBUG) {
		// Test the function locally before listening for calls to make sure it is working:
		if (!rfc_call("internal", "save_reading", "int", 1)) {
			printf("Something went wrong with the function!\n");
		}
	}

	rfc_listen();
}

```

Then, at your ESP, you have the following program compiled and flashed up:

```c
#include "rfc.h"

#define ERROR_PIN	2
#define ANALOG_PIN	T0

void setup() {
	pinMode(ERROR_PIN, OUTPUT);
	digitalWrite(ERROR_PIN, HIGH);
}

void loop() {
	int touch_value = touchRead(ANALOG_PIN);
	int success_sending_data = rfc_call("192.168.0.6", "save_reading", "int", touch_value);

	if (success_sending_data) {
		digitalWrite(ERROR_PIN, HIGH);
	} else {
		digitalWrite(ERROR_PIN, LOW);
	}

	delay(1000);
}

```

Now, if your ERROR_PIN (default led pin on most arduinos) lights up, you know there was a problem sending the data to your server. Otherwise, your server should have a new `data.txt` file being updated at every second with the analog pin reading. Just like that.

Remember that the exposed function is being called from the ESP, but the code is running on your server. Be very careful about allocating bytes and not accessing invalid memory segments as this could stop the server from work. I recommend using another program to check if your server is running and restart it if it stops.

## Limitations

Not everything is implemented by default in this library, so if you're not planning on expanding it, then make sure you understand what is not yet supported:

 - The return value of the server function MUST be an `int`, nothing else is programmed
 - Only `int` and `char` parameters are implemented as acceptable parameters.

The return value must always be one, doubles, unsigned int and other type of values are not implemented yet.

