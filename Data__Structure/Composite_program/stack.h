/**
 ******************************************************************************
 * @file           : stack.h 
 * @author         : Amr Khaled
 * @brief          : stack.h that consists of the prototypes of the functions 
 *                   with the definition of the stack element type StackEntry
 * @date           : 22/6/2024
 ******************************************************************************
**/



#ifndef STACK_H
#define STACK_H

#include "global.h"
#define LIMITED_MEMORY_2

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
