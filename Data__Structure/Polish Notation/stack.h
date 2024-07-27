#ifndef STACK_H
#define STACK_H

/*#define INFIX_TO_POSTFIX
#define EVALUATE_POSTFIX

#ifdef INFIX_TO_POSTFIX
typedef char StackEntry;
#endif

#ifdef EVALUATE_POSTFIX
typedef double StackEntry;
#endif*/
typedef struct Data {
	short int etype;
	union {
		double digit;
		char oprato;
	}info;
    
}DATA;
typedef DATA StackEntry;


typedef struct StackNode  {
    StackEntry Entry;
    struct StackNode *Next;
} StackNode;
typedef struct {
   StackNode *Top;
   int size;
} Stack;

void CreateStack(Stack *ps);
/*
pre  conditions: the stack is initialized and not full
post conditions: the element has been stored at the top of the stack
*/
void Push(StackEntry e, Stack *ps);
/*
pre  conditions: the stack is initialized and not empty
post conditions: the last element is returned with decrease the stack by one element
*/
void Pop(StackEntry *pe, Stack *ps);

int StackEmpty(Stack *ps);
int StackFull(Stack *ps);
/*
pre  conditions: stack is initialized
post conditions: destroy all elements stack looks as initialized
*/
void ClearStack(Stack *ps);
/*
pre  conditions: stack is initialized and not empty
post conditions: the last element is returned without change the stack
*/
void StackTop(StackEntry *pe, Stack *ps);
/*
pre  conditions: stack is initialized
post conditions: return how many elements exist
*/
int StackSize(Stack *ps);
// Precondition: The stack is Initialized
void TraverseStack(Stack *ps, void (*pe)(StackEntry));

#endif
