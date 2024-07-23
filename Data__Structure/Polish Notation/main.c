#include<stdio.h>
#include <conio.h> 
#include "stack.h"
#include "prefix.h"

void main(){
	/*char infix[]="1+2*3^4/5+6";
    char postfix[80];
    InfixToPostfix(infix, postfix);
    printf("\n %s", postfix);
    getch();*/
	char expr[]="354*+2$";
    double x;
    x=EvaluatePostfix(expr);
    printf("\n %f", x);
    getch();
}