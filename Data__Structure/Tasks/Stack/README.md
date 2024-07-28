## Project Description

This project involves redesigning the Stack Abstract Data Type (ADT) along with its operations to support additional functionalities. Additionally, the project includes a function to check the validity of expressions containing parentheses.

## Key Features

1. **Redesign the Stack ADT to support a `FindMin` function with Θ(1) complexity:**
   - The stack data structure has been redesigned so that the minimum element in the stack can be found in constant time Θ(1).

2. **Function to return the first element in the stack:**
   - A function has been implemented to return the first element that was pushed onto the stack.

3. **Function to destroy the stack:**
   - A function has been implemented to free all memory used by the stack and destroy it.

4. **Function to copy a stack to another:**
   - A function has been implemented to copy the contents of one stack to another stack.

5. **Function to return the size of the stack:**
   - A function has been implemented to return the current number of elements in the stack.

6. **Function to check for matching parentheses in an expression:**
   - A function has been implemented to take a string ending with the null character '\0' and return 1 if the string has correctly matching parentheses and 0 otherwise.
   - Example: The string `[...(...) {...}]` is valid, but the string `[...(...) {...}]` is not valid because `}` is the wrong match for `(`. Additionally, the string `[...(...) {...}]...)` is not valid because the last `)` does not match any parenthesis. Similarly, the string `( ... [...(...) {...}]` is not valid because the first `(` is not matched.
   
## Usage

### Stack Operations

- **Create a Stack:** Initialize a new stack.
- **Push an Element:** Add an element to the top of the stack.
- **Pop an Element:** Remove and return the top element of the stack.
- **FindMin:** Return the minimum element in the stack in constant time Θ(1).
- **First Element:** Return the first element that was pushed onto the stack.
- **Destroy Stack:** Free all memory used by the stack.
- **Copy Stack:** Copy the contents of one stack to another.
- **Stack Size:** Return the number of elements in the stack.

### Parentheses Matching

- **Check Matching Parentheses:** Verify if the given string has correctly matching parentheses.
  - Open parentheses `(`, `{`, `[` are pushed onto the stack.
  - Close parentheses `)`, `}`, `]` are checked against the top of the stack.
  - The function returns 1 for valid matching and 0 for invalid matching.
