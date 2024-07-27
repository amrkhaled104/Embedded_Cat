### README

# Stack and Queue Implementation

This project implements both stack and queue data structures with support for two different memory configurations: linked list-based and array-based. The configuration is controlled through preprocessor directives.

## Files

- `global.h`: Defines the `DATA` structure and common constants.
- `queue.h`: Header file for the queue implementation, containing function prototypes and queue structure definitions.
- `queue.c`: Implementation file for the queue functions.
- `stack.h`: Header file for the stack implementation, containing function prototypes and stack structure definitions.
- `stack.c`: Implementation file for the stack functions.
- `main.c`: Example usage of the stack and queue implementations.

## Configuration

You can switch between the linked list-based implementation and the array-based implementation by defining or commenting out `LIMITED_MEMORY_` in the header files (`stack.h` and `queue.h`).

- If `LIMITED_MEMORY_` is defined, the linked list-based implementation will be used.
- If `LIMITED_MEMORY_` is not defined, the array-based implementation will be used.

