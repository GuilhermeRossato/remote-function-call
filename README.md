<p id="rfc-title" align="center"><img src="https://github.com/GuilhermeRossato/remote-function-call/blob/master/docs/logo.png?raw=true" alt="Remote Function Call Logo"/></p>
<p align="center">:computer: A incomplete library that allows for function calls between native (C) programs, as a simpler alternative for <a href="https://users.cs.cf.ac.uk/Dave.Marshall/C/node33.html">RFC</a>:calling:</p>

## What is Remote Procedure Calling

Remote procedure calling is the technique that allows a process to expose a function so that other processes can call this procedure with parameters almost as if it was defined locally.

Basically it is a way to allow local functions to be called with parameters through the network from a process that may or may not run on the same system or environment, handling problems like endianess and cpu architecture between both computers so that the code itself only has to deal with the 'business' logic.

### Use Cases

- Distributed programming (multiple programs trying to solve a large distributed problem)
- Parallel programming (multiple programs calling functions from the same computer)
- Internet of Things (simple programs calling a powerful server for saving data or sending notifications)

## Motivation

Most remote function call libraries work with very little layers of abstracting and many steps between calling a function and that annoys me.

Programming should be simple and should always strive to be as simple as the language in which they were written allows it.

If you need to go over hoops to do something simple (i.e. call a function from another program) then you're either reinventing the wheel or doing something wrong.

## Useful Links

 - [Repository Usage](https://github.com/GuilhermeRossato/remote-function-call#repository-usage)
 - [Getting Started on Unix](https://github.com/GuilhermeRossato/remote-function-call#getting-started-on-unix)
 - [Getting Started on Windows](https://github.com/GuilhermeRossato/remote-function-call#getting-started-on-windows)
 - [Minimal Example](https://github.com/GuilhermeRossato/remote-function-call#minimal-example)
 - [Practical Examples](https://github.com/GuilhermeRossato/remote-function-call#practical-examples)
 - [Calling Remote Procedures](https://github.com/GuilhermeRossato/remote-function-call#calling-remote-procedures)
 - [Exposing Remote Procedures](https://github.com/GuilhermeRossato/remote-function-call#exposing-remote-procedures)
 - [Security and Data Integrity](https://github.com/GuilhermeRossato/remote-function-call#security-and-data-integrity)
 - [Manually calling the function from the network](https://github.com/GuilhermeRossato/remote-function-call#manually-calling-the-function-from-the-network)
 - [Limitations](https://github.com/GuilhermeRossato/remote-function-call#limitations)

## Calling Remote Procedures

A RFC call tries to be intuitive by summarizing and abstracting a lot of concepts involved on distributed programming.

The `rfc_call` is the method the client will use to send a call request:
```c
	rfc_call(
		char * hostname      // Ex: "127.0.0.1:8085" - The hostname, optionally containing the port to be used
		char * function_name // Ex: "foo" - The function name exposed by the server that we want to call
		... // The types, values, and sometimes buffer length of the parameters to be sent.
	)
```

There are two type of parameters you can send through the network: simple and arrays.

**Simple** elements are the type themselves, like `int`, `char`, `double`, `long`, etc.

To send a parameter of the `single` type, you can just tell the `rfc_call` the type of the value and the value itself, for example:

```c
char letter = 'b';
rfc_call("localhost", "foo", "char", letter);
rfc_call("localhost", "foo2", "char", letter, "char", letter);
```

We're expecting `foo` be exposed locally as a function that receives a char parameter, and `foo2` receives two char parameters.

**Arrays** are a bit more complicated since the amount of bytes it contains must be specified after its value, so for example:

```c
int values[] = {1, 4, 6, 3}; // A int array with 4 values
rfc_call("localhost", "foo3", "char*", message, 4);
```

This is necessary since C doesn't have any way to calculate or count the size of arrays.

To sum up: Simple parameters need their type and their value and Array parameters need their type, their pointer, and the number of elements of the array.

RFC Call uses this number to construct the network buffer to be sent to the server.

## Exposing Remote Procedures

To expose a function you only need to call the `rfc_expose` function, that follows this format:

```c
int rfc_expose(
	char * descriptor,
	void * function_pointer
);
```

The `descriptor` parameter describes the function as a header function, this string will be broken into parts to be saved internally in the library to validate parameters and expose the function name. It follows the following structure:

```
[return type] [function name]([function parameter types])
```

An example of a function descriptor is the following string `"int foo(int)"`, describing a function named `foo`, that receives an `char` as parameter and returns an `int`.

A few other examples of valid descriptor so that you get familiar with it:

```c
"int no_parameters()"; // A function that only returns an int, but receives no argument.
"int receive_three_integers(int, int, int)"; // receives 3 parameter and is exposed as "receive_three_integers"
"int receive_text     (char *)"; // Extra spaces after the function name "receive_text" are ignored, the parameter is a char array
"int receive_many_text(char *, char*, char    *, char*)"; // Receives many char* parameters, and as you can see spaces are ignored.
```

This is where you give the name of the exposed function, you can even change it to a one-letter function to re-route a function name if you want to.

Then, the `function_pointer` parameter is just the pointer to the function you want the exposed function to be associated with

The following example is a commented example broken into parts for clarity:

```c
// We want to expose this function
int my_internal_function(char a) {
	// When it runs, it will print the parameter it received
	printf("Received %c\n", a);
}

void main() {
	// We will expose your internal function:
	rfc_expose(
		// The exposed function will be called 'foo' externally.
		// The caller MUST specify the char type when he calls the 'foo' function
		"int foo(char)",
		// The pointer to the associated function
		my_internal_function
	);

	// We will listen for requests (to any of the exposed functions) at the default port
	rfc_listen();
}
```

## Getting Started on Unix

The library is not complete and using it's usage is not advised since there are a lot of missing features, but once it is complete the following steps should make it work:

The steps below are tailored for Unix systems (like Ubuntu, Debian, or other Linux distros), if you are using windows the command might vary slightly, use [this link](https://github.com/GuilhermeRossato/remote-function-call#getting-started-on-windows) instead.

1. Download the file at [./build/rfc.h](https://github.com/GuilhermeRossato/remote-function-call/blob/master/build/rfc.h?raw=true)
2. Include it in your `server.c` file:

```c
// server.c
#include "rfc.h"

int test() {
	printf("hello world!\n");
}

void main() {
	rfc_expose("int test()", test);
	rfc_call("internal", "test");
}
```

3. Compile your program:

```bash
gcc server.c -o server
```

4. If the file was created successfully, you should be able to run it:

```bash
./server
```

5. If everything went well, change your `server.c` to allow external requests:

```c
// server.c
#include "rfc.h"

int test() {
	printf("hello world!\n");
}

void main() {
	rfc_expose("int test()", test);
	rfc_listen();
}
```

6. Create the `client.c` that will call your exposed function:

```c
// client.c
#include "rfc.h"

int test() {
	printf("hello world!\n");
}

void main() {
	rfc_call("localhost", "test");
}
```

7. Compile the server and the client sources:

```bash
gcc client.c -o client
gcc server.c -o server
```

8. Run the server and the client (in the correct order) to check if it is working locally:

```bash
./server &
./client
fg
```

The fg command will instruct your console to pull the server code from the background (so you can use Ctrl+C to stop it from working)

## Getting Started on Windows

The library is not complete and using it's usage is not advised since there are a lot of missing features, but once it is complete the following steps should make it work:

The steps below are tailored for Windows systems, if you are using windows the command might vary slightly, use [this link](https://github.com/GuilhermeRossato/remote-function-call#getting-started-on-unix) instead.

1. Download the file at [./build/rfc.h](https://github.com/GuilhermeRossato/remote-function-call/blob/master/build/rfc.h?raw=true)
2. Include it in your `server.c` file:

```c
// server.c
#include "rfc.h"

int test() {
	printf("hello world!\n");
}

void main() {
	rfc_expose("int test()", test);
	rfc_call("internal", "test");
}
```

3. Compile your program:

```bash
gcc server.c -o server.exe
```

4. If the file was created successfully, you should be able to run it:

```bash
server.exe
```

5. If everything went well, change your `server.c` to allow external requests:

```c
// server.c
#include "rfc.h"

int test() {
	printf("hello world!\n");
}

void main() {
	rfc_expose("int test()", test);
	rfc_listen();
}
```

6. Create the `client.c` that will call your exposed function:

```c
// client.c
#include "rfc.h"

void main() {
	rfc_call("localhost", "test");
}
```

7. Compile the server and the client sources:

```bash
gcc client.c -o client.exe
gcc server.c -o server.exe
```

8. Run the server so that the client can connect to it:

```bash
server.exe
```

Leave the server running and run the client from another terminal:

```bash
client.exe
```

This should have printed 'hello world!' at your server

## Minimal Example

Setting up the server that will listen for a single function call should be as simple as this:

```c
// server.c
#include <stdio.h>
#include "rfc.h"

void my_function(int value) {
	char * origin = rfc_get_caller_name();

	printf("%s called me with %d\n", origin, value);
}

int main() {
	rfc_expose("int my_function(int)", my_function);
	rfc_listen_once(8086); // replace with "rfc_listen" so that it can be called multiple times
	return 0;
}

```

And instancing a client to call that exposed function with a parameter should be like the following:


```c
// client.c
#include "rfc.h"

int main() {
	rfc_call("localhost:8086", "my_function", "int", 42);
	return 0;
}

```

The above example is not fully implemented since networking is still missing, but it's the basic principle and it might change as development progresses.

## Practical Examples

Here are some examples that have some actual use or are very similar to real-world problems

### Deposit Money on Bank System

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

### IOT Logger

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

### Alternating Master-Slave Counting

This is a distributed calculation where computer takes turns counting a value until a number is reached.

This first.c source describes the first program to be executed, which will start by listening for a function call:

```c
// first.c
#include <stdlib.h>
#include "rfc.h"

int value = 0;

int count(int a) {
	value = a + 1;
}

// A busy wait to prevent a race condition
unsigned long busy_wait() {
	unsigned long i;
	for (i = 0 ; i < 1000*1000*100; i--) { i+=2; }
	return i;
}

void main() {
	rfc_expose("int count(int)", count);

	while (number < 10) {
		rfc_listen_once(8086);
		printf("The value is now %d\n", value);
		busy_wait();
		if (!rfc_call("localhost:8085", "count", "int", number)) {
			printf("Something went wrong at the first process\n");
			break;
		}
	}
}
```

The second.c source describes the program that will start the count:

```c
// first.c
#include <stdlib.h>
#include "rfc.h"

int value = 0;

int count(int a) {
	value = a + 1;
}

// A busy wait to prevent a race condition
unsigned long busy_wait() {
	unsigned long i;
	for (i = 0 ; i < 1000*1000*100; i--) { i+=2; }
	return i;
}

void main() {
	rfc_expose("int count(int)", count);

	while (number < 10) {
		busy_wait();
		if (!rfc_call("localhost:8086", "count", "int", number)) {
			printf("Something went wrong at the second process\n");
			break;
		}
		rfc_listen_once(8085);
		printf("The value is now %d\n", value);
	}
}
```

Run the `first` executable, then the `second` and you should see about 10 lines printed on each executable.

That's it!

## Limitations

Not everything is implemented by default in this library, so if you're not planning on expanding it, then make sure you understand what is not yet supported:

 - The return value of the server function MUST be an `int`, nothing else is programmed
 - Only `int` and `char` parameters are implemented as acceptable parameters.

The return value must always be one, doubles, unsigned int and other type of values are not implemented yet.

## Security and Data Integrity

There is no encryption going on and the data is sent in a simple binary format that is easily interpreted by a middleman or network sniffer.

Treat the values you send from the client to the server as public, as someone could write a program to detect when RFC calls are executed in a network with ease.

This application should not run on sensitive environments. Ideally you would have a firewall or a closed network for this to be effective.

I also expect the underlying protocol (TCP) to handle data integrity, since i'm only checking the parameters, its type and sizes.

## Repository Usage

This repository is for the development of the library which will be found at the `build` directory once it is finished.

If you want to develop, change or expand it, here are the steps to clone the repository, install dependencies (with `npm`) and run the test suite:

```bash
git clone https://github.com/GuilhermeRossato/remote-function-call.git
cd remote-function-call
npm install
npm test
```

The library is not done yet, but once it is you will be able to build it with:

```
npm run build
```

This will generate a `rfc.h` file at the `build` folder. To include and use it in your programs C you just need to include it.

### Testing

The testing framework used to test this application is [frappu](https://github.com/GuilhermeRossato/frappu), a minimalist test suite for C projects that helped make this project in a Test-Driven-Development fashion.

Testing can be executed by calling the `frappu` command or the recomended way, running from npm:

```
npm test
```


## Manually calling the function from the network

If you have an ESP32 or an Arduino connected to your network, you can call exposed functions creating your own buffer so you don't need to include this library on your code-base, the packets are very simple:

1. First, create a TCP connection between you and the `hostname:port` of the running process you want to call the function from.
2. Leave the process running on the host computer and take note of the exposed function name.
3. Create a packet with the following format:

| `buffer size (4 bytes)` | `first parameter type (4 bytes)` | `first parameter count (4 bytes)` | `variable content data   ` | `repeat parameter part` |
| ----------------------- | -------------------------------- | --------------------------------- | -------------------------- | --- |
| `MSB              LSB ` | `MSB                        LSB` | `MSB                         LSB` | `each parameter byte here` | `repeat parameter part` |

For example, for a function receiving a single 'A' character as parameter, the buffer should be the following:

` 0x00000016 0x00000001 0x00000000 0x65 `

The buffer size is just the amount of bytes the packet has, including its 4 bytes, the parameter types are 1 for int, 2 for chars (as of now), parameter count is the number of parameter types included in the variable content data (if this values has '2' and the type is int, then there should be 8 bytes describing 2 integers following it).

Sending this binary data through the connection should give you a result code, which is the return value of the function. If it fails it will return 0. Note that your function can also return 0 on its own to communicate an error.

For example, if you mess up the parameter buffer size, parameter type, or count, an error message will be displayed on the server if debugging is active (which it is by default).

In the future there will be a variety of buffer creation utilities to generate the buffer at `./utils/*`, but I haven't got to write these.

## License

The code was written entirely by me and I release it with the license as MIT. Basically you're free to use, edit, modify this code as long as it does not affect me.

## That's All