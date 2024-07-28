#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    Stack s;
    CreateStack(&s);
    StackEntry e;
    char str[50];
    
    printf("Enter string: ");
    scanf("%s", str);
    
    int flag = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            Push(str[i], &s);
        }
		else if (str[i] == ')') 
		{
            if (StackEmpty(&s)) {
                flag = 1;
                break;
            }
            StackTop(&e, &s);
            if (e != '(') {
                flag = 1;
                break;
            } 
			else {
                Pop(&e, &s);
            }
        } 
		else if (str[i] == '}') 
		{
            if (StackEmpty(&s))
				{
                flag = 1;
                break;
            }
            StackTop(&e, &s);
            if (e != '{') 
			{
                flag = 1;
                break;
            }
			else 
			{
                Pop(&e, &s);
            }
        } 
		else if (str[i] == ']')
			{
            if (StackEmpty(&s))
				{
                flag = 1;
                break;
            }
            StackTop(&e, &s);
            if (e != '[') {
                flag = 1;
                break;
            } else {
                Pop(&e, &s);
            }
        }
    }
    
    if (!StackEmpty(&s)) 
	{
        flag = 1;
    }
    
    if (flag) {
        printf("NOT VALID\n");
    } else {
        printf("VALID\n");
    }

    return 0;
}
