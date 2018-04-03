# supercharging-node
Files to go with my talk about using C++ to make Node more performant

Slides are available [here](https://docs.google.com/presentation/d/1QK9uqoGanz2oQeUKmNxb0L6VEgZ5wMwcvmRz5g58K_I/edit?usp=sharing)

Each example can be speed tested by navigating to the folder and running `npm test`

## 01 - Node
The first example is written purely in Node and demonstrates how an intensive function can block the event loop, which will impact server performance and prevent Node from handling new client requests.

## 02 - FFI
The second example shows how we can use an external C library to handle the intensive operation. We access it using Foreign Function Interface which is much faster than Node's JS layer.

## 03 - Addon
The third example demonstrates how to build a V8 Addon in C++ which handles our processor intensive function. As it runs as part of the V8 engine, and closer to Node's core, you get a significant performance boost.
