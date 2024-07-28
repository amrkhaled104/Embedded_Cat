#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void Display(int e) {
    printf("Age: %d\n", e);
}

int main() {
    Stack s;
    Stack s2;
    CreateStack(&s);
	CreateStack(&s2);
    int e;
    do {
        printf("\n-----------------------------------------------\n");
        printf("1. Clear the stack.\n");
        printf("2. Read an element then Push it.\n");
        printf("3. Pop an element then display it.\n");
        printf("4. What is the stack size?\n");
        printf("5. Display the Stack Top.\n");
        printf("6. Print all elements in the stack.\n");
        printf("7. Print the Minimum element.\n");
        printf("8. Print the First element.\n");
        printf("9. copy a stack to another and print .\n");
        printf("10. Exit.\n");
        printf("-----------------------------------------------\n");

        int choose;
        printf("\nEnter Your Order: ");
        scanf("%d", &choose);

        // Clear the newline character from the input buffer
        while (getchar() != '\n');

        switch (choose) {
            case 1:
                ClearStack(&s);
                break;

            case 2:
                if (!StackFull(&s)) {
                    char term;
                    while (1) {
                        printf("Enter the number: ");
                        if (scanf("%d%c", &e, &term) != 2 || term != '\n') {
                            printf("Invalid input, please enter a number.\n");
                            while (getchar() != '\n'); // Clear the input buffer
                        } else {
                            break; // Valid input
                        }
                    }
                    Push(e, &s);
                } else {
                    printf("The Stack is Full !!\n");
                }
                break;

            case 3:
                if (!StackEmpty(&s)) {
                    Pop(&e, &s);
                    printf("The popped element Data\n\nNum = %d", e);
                } else {
                    printf("The Stack is Empty !!\n");
                }
                break;

            case 4:
                printf("Stack Size = %d\n", StackSize(&s));
                break;

            case 5:
                if (!StackEmpty(&s)) {
                    StackTop(&e, &s);
                    printf("The TOP element Data\n\nNum = %d", e);
                } else {
                    printf("The Stack is Empty !!\n");
                }
                break;

            case 6:
                TraverseStack(&s, &Display);
                break;

            case 7:
			   if(!StackEmpty(&s)){
				   printf("Min Element = %d\n", FindMin(&s));
                   break;
			   }
			   else
			   {
				   printf("NO Item Exist");
                   break;
			   }
			   
            case 8:
			   if(!StackEmpty(&s)){
				   FisrtElement(&e,&s);
				   printf("Fist Element = %d\n",e );
                   break;
			   }
			   else
			   {
				   printf("NO Item Exist");
                   break;
			   }
            case 9:
			  Copystack(s,&s2);
			  printf("Stack 1\n");
			  TraverseStack(&s, &Display);
			  
			  printf("Stack 2\n");
			  TraverseStack(&s2, &Display);
                break;

            case 10:
                exit(0);
                break;

            default:
                printf("Invalid choice, please try again.\n");
                break;
        }

        printf("\nEnter y to continue.... \n");
    } while (getchar() == 'y');

    return 0;
}
