<p id="rfc-title" align="center"><img src="https://github.com/GuilhermeRossato/remote-function-call/blob/master/docs/logo.png?raw=true" alt="Remote Function Call Logo"/></p>
<p align="center">:computer: A incomplete library that allows for function calls between native (C) programs, as a simpler alternative for <a href="https://users.cs.cf.ac.uk/Dave.Marshall/C/node33.html">RFC</a>:calling:</p>

## What is Remote Procedure Calling

Remote procedure calling is the technique that allows a process to expose a function so that other processes can call this procedure with parameters almost as if it was defined locally.

Basically it is a way to allow local functions to be called with parameters through the network from a process that may or may not run on the same system or environment, handling problems like memory management and cpu architecture between both computers so that the code itself only has to deal with the 'business' logic, instead of network and parameter validation.

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
 - [Sending arrays in parameters](https://github.com/GuilhermeRossato/remote-function-call#sending-arrays-in-parameters)
 - [Exposing Remote Procedures](https://github.com/GuilhermeRossato/remote-function-call#exposing-remote-procedures)
 - [Security and Data Integrity](https://github.com/GuilhermeRossato/remote-function-call#security-and-data-integrity)
 - [Manually calling the function from the network](https://github.com/GuilhermeRossato/remote-function-call#manually-calling-the-function-from-the-network)
 - [Interface](https://github.com/GuilhermeRossato/remote-function-call#interface)
 - [Limitations](https://github.com/GuilhermeRossato/remote-function-call#limitations)

## Calling Remote Procedures

A RFC call tries to be intuitive by summarizing and abstracting a lot of concepts involved on distributed programming.

The `rfc_call` is the method the client will use to send a call request, for example:
```c
rfc_call(
	"127.0.0.1:8085", // The hostname with an optional port of the target server (default port is yet to be decided)
	"sum_two_integers", // the name of the function exposed by the server
	"int", // the type of the first parameter of the exposed function at the server
	1, // the value of the first parameter of the exposed function
	"int", // the type of the second parameter
	2 // the last value of the exposed function
);
```

We are supposing the server is at the ip address 127.0.0.1 with the port 8085 open and has a function exposed in the format `int sum_two_integers(int, int)`.

## Exposing Remote Procedures

To expose a function you need to call the `rfc_expose` function, which has exactly two parameters and as this syntax:

```c
int rfc_expose(
	char * descriptor,
	void * function_pointer
);
```

The `descriptor` parameter describes the function as a header function just like a C function declaration. The parameter will be parsed and saved internally to validate parameters and expose the function name. It follows the following structure:

```
<return type> <function name>(<function parameter types>)
```

An example of a function descriptor is the following string `"int foo(char)"`, describing a function named `foo`, that receives an `char` as parameter and returns an `int`.

A few other examples of valid descriptor, even thought you should be familiar with it:

```c
"int no_parameters()"; // A function that only returns an int, but receives no argument.
"int receive_three_integers(int, int, int)"; // receives 3 parameter and is exposed as "receive_three_integers"
"int receive_text     (char *)"; // Extra spaces after the function name "receive_text" are ignored, the parameter is a char array
"int receive_many_text(char *, char*, char    *, char*)"; // Receives many char* parameters, and as you can see spaces are ignored.
```

This is also where you give the name of the exposed function since an exposed function can have a different internal name.

The second parameter, `function_pointer`, is the pointer to the function you want the exposed function to be associated with.

The following example is broken into parts for clarity:

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

## Sending arrays as parameters

The **simple** parameters like `int`, `char`, `double` and `long`, are very easy to send and receive, as their size is known in runtime and can be easily called:

```c
char letter = 'b';
rfc_call("localhost", "foo", "char", letter);
rfc_call("localhost", "foo2", "char", letter, "char", letter);
```

However, arrays are a bit more complicated since the call must contain the pointer and the size of the data it intends to send.

It is necessray to pass the size right after the pointer, for example:

```c
int values[] = {1, 4, 6, 3}; // A int array with 4 values
rfc_call("localhost", "foo3", "int*", message, 4);
```

Note we used `int*` instead of `int`, this symbolizes we are sending an array of integers of the size of 4 * sizeof(int) to the exposed function.

In this example, since our array is constant, we could replace the `4` with `sizeof(values) / sizeof(int)`, but that's up for the developer to decide.

The library uses this length to construct the network buffer to be sent to the server.

## Getting Started on Unix

The library is not complete and using it's usage is not advised since there are a lot of missing features, but once it is complete the following steps should make it work:

The steps below are tailored for Unix systems (like Ubuntu, Debian, or other Linux distros), if you are using windows the command might vary slightly, use [this link](https://github.com/GuilhermeRossato/remote-function-call#getting-started-on-windows) instead.

1. Download the distribution file at: [./build/rfc.h](https://github.com/GuilhermeRossato/remote-function-call/blob/master/build/rfc.h?raw=true)
2. Include it in your `server` source:

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

3. Compile your program with your prefered compiler, like so:

```bash
gcc server.c -o server
```

There are no dependencies as of now, and the compiler should probably return successfully without any log

4. If the `server` executable was created successfully, you should be able to run it:

```bash
./server
```

The server should print 'hello world' at the console, since it called an internal exposed function.

5. Change your `server` source to allow external requests:

```c
// server.c
#include "rfc.h"

int test() {
	printf("hello world!\n");
}

void main() {
	rfc_expose("int test()", test);
	rfc_listen("localhost:8085");
}
```

You should be able to compile and run it the same way as before. This code will open the port 8085 at localhost (127.0.0.1) to expose the declared functions functions (in this case there is only one).

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

Instancing a client to call that exposed function with a parameter is done in the following way:

```c
// client.c
#include "rfc.h"

int main() {
	rfc_call("localhost:8086", "my_function", "int", 42);
	return 0;
}

```

The above example is not fully implemented (networking is still missing), but it's the basic principle and it might change as development progresses.

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

All of that creates a lot of overhead especially if you just want to send simple parameters which is the case for IOT: a sensor only needs to send about 3 integers to a server to save these values.

The remote-function-call works by abstracting everything between the function call and the server.

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
		if (rfc_call("internal", "save_reading", "int", 1) != 1) {
			printf("Something went wrong with the function, it did not return 1!\n");
		}
	}

	rfc_listen("localhost:8080");
	rfc_free();
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

	rfc_free();
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

	rfc_free();
}
```

Run the `first` executable, then the `second` and you should see about 10 lines printed on each executable.

That's it!

## Interface

- int rfc_expose(char * descriptor, void * func_ptr)

Specify a internal function that should be exposed at the server when it starts listening. Example: `rfc_expose("foo_external", foo_internal);"

Warning: this allocates memory with malloc for a internal linked list that can only be freed with rfc_free(), which frees everything in the list.

- int rfc_listen(char * host)

Starts listening for external requests as `host:port`. Example: `rfc_listen("localhost:8085")`.

- int rfc_listen_once(char * host)

Listens for a single function call, whatever it is.

- void rfc_stop();

Stops listening for external requests, breaking out of the loop a `rfc_listen`, or does nothing if it was on a `rfc_listen_once` call. Example:

```c
int stop_listening() { rfc_stop(); } // function declaration
[...]
rfc_expose("int stop_everything()", stop_listening); // at startup
[...]
rfc_listen("localhost:1234"); // at main
```

Must be used inside exposed functions, since the process is blocked waiting for network activity. It is also useful to handle fatal errors.

- void rfc_free()

This frees memory created by the rfc_expose function removing all exposed functions and their descriptions from the server. Does absolutely nothing if `rfc_expose` was never called.

After calling this function you will not be able to `rfc_listen` until you call `rfc_expose` again at least once since no function descriptors will be prepared to be received. (This does actually cause an error).

- const char * rfc_get_last_error()

With the exception of the functions that return void, all functions returns an int indicating success. 1 is for successfull operation and 0 is for failure.

If any function returns zero, it means something went wrong and the error const char array is populated with an error message and can be printed like the following:

```c
if (rfc_listen("localhost:68000) != 1) {
	printf("Failed because of error: %s\n", rfc_get_last_error());
}
```

## Limitations

Not everything is implemented by default in this library, so if you're not planning on expanding it, then make sure you understand what is not yet supported:

 - The return value of the server function MUST be an `int`, nothing else is programmed
 - The only acceptable parameters type to rfc_call are: `int`, `char`.

## Security and Data Integrity

There is no encryption going on and the data is sent in a simple binary format that is easily interpreted by a middleman or network sniffer.

Treat the values you send from the client to the server as public and readable, as someone could write a program to detect when RFC calls are executed in a network with ease if they knew what each parameter meant, which is not difficult since function names will be included in the request. This application should not run on sensitive environments. Ideally you would have a firewall, a closed network or an encryption for this to be effective in sensitive envs.

I'm also expecting the underlying protocol (TCP) to handle data integrity by only checking the parameters, its type and sizes, before deciding if something is an error or not.

## Repository Usage

This repository is for the development of the built version of this library which will be found at the `build` directory once it is finished.

If you want to develop, change or expand it, here are the steps to clone the repository, install dependencies (with `npm`) and run the test suite:

```bash
git clone https://github.com/GuilhermeRossato/remote-function-call.git
cd remote-function-call
npm install
npm run test
```

The library is not done yet, but once it is you will be able to build it with:

```
npm run build
```

This will generate a `rfc.h` file at the `build` folder. That file will contain  everything you need to use this library.

### Testing

The testing framework used to test this application is [frappu](https://github.com/GuilhermeRossato/frappu), a minimalist test suite for C projects that helped make this project in a Test-Driven-Development fashion.

Testing can be executed by calling the `frappu` command or the recomended way, running from the `npm` script:

```
npm run test
```

## Manually calling the function from the network

If you have an Arduino or an ESP32 connected to your network, you can call exposed functions creating your own buffer so you don't need to include this library on your code-base, the packets are very simple:

1. First, create a TCP connection between you and the `hostname:port` of the running process you want to call the function from.
2. Leave the process running on the host computer and take note of the exposed function name.
3. Create a packet with the following format:

| `buffer size (4 bytes)` | `first parameter type (4 bytes)` | `first parameter count (4 bytes)` | `variable content data   ` | `repeat parameter part` |
| ----------------------- | -------------------------------- | --------------------------------- | -------------------------- | --- |
| `MSB              LSB ` | `MSB                        LSB` | `MSB                         LSB` | `each parameter byte here` | `repeat parameter part` |

For example, for a function receiving a single 'A' character as parameter, the buffer should be the following:

` 0x00000016 0x00000001 0x00000000 0x65 `

The buffer size is just the amount of bytes the packet has, including its 4 bytes, the parameter types numbers are 1 for int, 2 for chars (as of now), parameter count is the number of parameter types included in the variable content data (if this values has '2' and the type is int, then there should be 8 bytes describing 2 integers following it).

Sending this binary data through the connection should give you a result code, which is the return value of the function. If it fails it will return 0. Note that your function can also return 0 on its own to communicate an error.

For example, if you mess up the parameter buffer size, parameter type, or count, an error message will be displayed on the server if debugging is active (which it is by default).

In the future there will be a variety of buffer creation utilities to generate the buffer at `./utils/*`, but I haven't got to write these.

## Memory

This library allocates objects when you call `rfc_expose` with `malloc` and frees all its internal memory when you call `rfc_free`.

Clients which only send data with `rfc_call` don't need to call `rfc_free`, but will also not generate any error if they do call it.

The following is a valid example of well-managed memory code in a server exposing a function, then removing it, then exposing another.

```c
int number = 0;

void start_calculations() {
	printf("Started calculations!");
}

int retrieve_number() {
	return number;
}

int main(void) {
	int i;
	rfc_expose("start_calculations()", start_calculations);
	rfc_listen_once("localhost:8085");
	for (i = 0; i < 10; i++) {
		number = number + i;
	}
	rfc_free(); // all internal memory is freed

	rfc_expose("int retrieve_number()", retrieve_number);
	rfc_listen_once("localhost:8085");
	rfc_free(); // all internal memory is freed again
	return 0;
}
```

## License

This project and its code, complete or incomplete, was written entirely by me (Guilherme Rossato) and I release it with the MIT license. You're free to use, edit, modify and redistribute this code as long as it does not affect me negatively.

## That's All