# Remote Function Call

An incomplete alternative to Remote Procedure Call (RPC) between native (C) programs with a simpler, more intuitive API.

## What is Remote Procedure Calling

Native Processes (running compiled C code) sometimes need to call a function that is in another native process through the network that may or may not run on the same OS.

Basically we must deal with problems that arise from endianess, cpu architecture and other aspects of data handling between two compures.

## Motivation

Most remote function call libraries work with many layers and steps between calling a function and that annoys me.

Programming should be simple and should ALWAYS strive to be as simple as the language in which they were written allows it.

If you need to go over hoops to do something simple (i.e. call a function from another program) then you're either reinventing the wheel or doing something wrong.


## Structure and Usage

A RFC call tries to be intuitive by summarizing and abstracting every aspect of it.

Ideally, setting up a server should be as simple as this:

```c
// server.c
#include <stdio.h>
#include "rfc.h"

void my_function(int value) {
	printf("Someone called me with %d\n", value);
}

int main() {
	rfc_expose(&my_function, "my_function", "int");
	rfc_start_server(8086);
	return 0;
}

```

And instancing a client to call that exposed function with a parameter should be like the following:


```c
// client.c
#include <stdio.h>

int main() {
	rfc_call("localhost:8086", "my_function", "int", 42);
	return 0;
}

```

The above structure and example may change as development progresses.