#ifndef PREFIX_H
#define PREFIX_H

// Convert infix expression to postfix (this function is not currently used in main)
void InfixToPostfix(char infix[], char postfix[]);

// Check if the character is a digit
int IsDigit(char c);

// Determine the precedence of operators
int Precedance(char op, char c);

// Evaluate a postfix expression
double EvaluatePostfix(char expr[]);

// Perform the operation based on the operator
double Oper(char c, double op1, double op2);

#endif
