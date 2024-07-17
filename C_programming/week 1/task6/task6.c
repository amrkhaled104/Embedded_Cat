/*Write a code that takes 2 numbers and print the arithmetical, logical and bitwise
operations.*/
#include <stdio.h>

int main() {
    int num1, num2;
    // Taking input for two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    // Arithmetic operations
    printf("\nArithmetic Operations:\n");
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    if(num2!=0){
		printf("div: %d\n", num1 / num2);
	printf("Modulus: %d\n", num1 % num2);
	}
	else{printf("error div/0 XXXXXX");}
    
    // Logical operations
    printf("\nLogical Operations:\n");
    printf("AND: %d\n", num1 && num2);
    printf("OR: %d\n", num1 || num2);
    printf("NOT for the first number: %d\n", !num1);
    printf("NOT for the second number: %d\n", !num2);
    // Bitwise operations
    printf("\nBitwise Operations:\n");
    printf("Bitwise AND: %d\n", num1 & num2);
    printf("Bitwise OR: %d\n", num1 | num2);
    printf("Bitwise XOR: %d\n", num1 ^ num2);
    printf("Bitwise NOT for the first number: %d\n", ~num1);
    printf("Bitwise NOT for the second number: %d\n", ~num2);

    return 0;
}
