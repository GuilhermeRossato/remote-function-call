# Remote Function Call

An incomplete alternative to Remote Procedure Call (RPC) between native (C) programs with a simpler, more intuitive API.

## What is Remote Procedure Calling

Native Processes (running compiled C code) sometimes need to call a function that is in another native process through the network that may or may not run on the same OS.

Basically we must deal with problems that arise from endianess, cpu architecture and other aspects of data handling between two compures.

## Motivation

Most remote function call libraries work with many layers and steps between calling a function and that annoys me.

Programming should be simple and should ALWAYS strive to be as simple as the language in which they were written allows it.

If you need to go over hoops to do something simple (i.e. call a function from another program) then you're either reinventing the wheel or doing something wrong.

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

## Structure and Usage

A RFC call tries to be intuitive by summarizing and abstracting every aspect of it.

Ideally, setting up a server should be as simple as this:

```c
// server.c
#include <stdio.h>
#include "rfc.h"

void my_function(int value) {
	char * origin = rfc_get_caller_name();

	printf("%s called me with %d\n", origin, value);
}

int main() {
	rfc_expose(&my_function, "my_function", "int");
	rfc_listen_once(8086);
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

The above structure and example may change as development progresses.

## Testing

The testing framework used to test this application is [frappu](https://github.com/GuilhermeRossato/frappu), a minimalist test suite for C projects that helped make this project in a Test-Driven-Development fashion.

Testing can be executed by calling the `frappu` command or the recomended way, running from npm:

```
npm test
```

## Manually calling the function from outside

If you have an ESP32 or an Arduino connected to your network, you can call exposed functions creating your own buffer, the packets are very simple:

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

License is MIT, basically you're free to use, edit, modify this code as long as it does not affect me.

## That's All