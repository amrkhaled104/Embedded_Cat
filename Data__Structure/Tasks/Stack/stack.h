#ifndef STACK_H
#define STACK_H

#define LIMITED_MEMORY_2

typedef int StackEntry;
#define MaxStack 100

#ifdef LIMITED_MEMORY_2

typedef struct StackNode {
    StackEntry Entry;
    struct StackNode *Next;
} StackNode;

typedef struct {
    StackNode *Top;
    int size;
} Stack;

#else
typedef struct {
    int Top;
    StackEntry entries[MaxStack];
} Stack;

#endif 

int FindMin(Stack *ps);
void FisrtElement(StackEntry *pe,Stack *ps);
void CreateStack(Stack *ps);
void Push(StackEntry e, Stack *ps);
void Pop(StackEntry *pe, Stack *ps);
int StackEmpty(Stack *ps);
int StackFull(Stack *ps);
void ClearStack(Stack *ps);
void StackTop(StackEntry *pe, Stack *ps);
int StackSize(Stack *ps);
void TraverseStack(Stack *ps, void (*pe)(StackEntry));

#endif // STACK_H
