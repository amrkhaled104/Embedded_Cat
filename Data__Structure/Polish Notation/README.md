## Overview

This project implements a basic expression evaluator for postfix notation. The evaluator supports a limited set of operations and has certain constraints. Please read through the limitations and usage guidelines carefully.

## Limitations

1. **Single-Digit Integers Only**:
   - The evaluator supports only single-digit integers (0-9). Multi-digit numbers are not handled.

2. **Positive Integers Only**:
   - The evaluator only processes positive integers. Negative numbers are not supported.

3. **No Unary Operators**:
   - Unary operators (e.g., negation) are not allowed. Only binary operators are supported.

4. **No Brackets**:
   - The evaluator does not handle expressions with brackets or parentheses. The input must be in postfix notation without any brackets.

5. **Error Handling**:
   - The evaluator does not handle invalid expressions. Possible issues include:
     - Extra operators without sufficient operands.
     - Invalid operator ordering or incorrect postfix notation.

6. **No Characters Allowed**:
   - The evaluator does not accept any characters other than digits (0-9) and operators (+, -, *, /, ^, $). Any other characters will result in unexpected behavior.

## Supported Operations

- **Addition (`+`)**: Adds two operands.
- **Subtraction (`-`)**: Subtracts the second operand from the first operand.
- **Multiplication (`*`)**: Multiplies two operands.
- **Division (`/`)**: Divides the first operand by the second operand.
- **Exponentiation (`$`)**: Raises the first operand to the power of the second operand.

## Example Usage

### Input

A postfix expression: `354*+2$`

### Output

Evaluates the expression as follows:

1. Push 3, 5, and 4 onto the stack.
2. Apply the `*` operator (5 * 4) and push the result (20) onto the stack.
3. Apply the `+` operator (3 + 20) and push the result (23) onto the stack.
4. Push 2 onto the stack.
5. Apply the `$` operator (23 ^ 2) and push the result (529) onto the stack.

The final result is `529`.