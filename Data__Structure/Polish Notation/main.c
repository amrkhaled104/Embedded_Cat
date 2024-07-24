#include<stdio.h>
#include <conio.h> 
#include "stack.h"
#include "prefix.h"

void main(){
	/*char infix[]="4+3*(6*3-12)";
    char postfix[80];
    InfixToPostfix(infix, postfix);
    printf("\n %s", postfix);
    getch();*/
	char expr[]="14+3-";
    double x;
    x=EvaluatePostfix(expr);
    printf("\n %f", x);
    getch();
}