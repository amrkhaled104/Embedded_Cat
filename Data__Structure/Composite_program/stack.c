/**
 **********************************************************************************
 * @file           : stack.c 
 * @author         : Amr Khaled
 * @brief          : stack.c that consists of the implementation of the functions 
 * @date           : 22/6/2024
 **********************************************************************************
**/
#include "stack.h"

#ifdef LIMITED_MEMORY_2

#include <stdio.h>
#include <stdlib.h>


// Initialize the stack.
void CreateStack(Stack *ps) {
    ps->Top = NULL;
    ps->size = 0;
}

// Push an element to the stack.
void Push(StackEntry e, Stack *ps) {
    StackNode *pn = (StackNode *)malloc(sizeof(StackNode));
    pn->Entry = e;
    pn->Next = ps->Top;
    ps->Top = pn;
    ps->size++;
}

// Pop an element from the stack.
void Pop(StackEntry *pe, Stack *ps) {
    StackNode *pn;
    *pe = ps->Top->Entry;
    pn = ps->Top;
    ps->Top = ps->Top->Next;
    free(pn);
    ps->size--;
}

// Check if the stack is empty or not.
int StackEmpty(Stack *ps) {
    return ps->Top == NULL;
}

// Check if the stack is full or not.
int StackFull(Stack *ps) {
    return 0;
}

// Clear stack and destroy all elements in it.
void ClearStack(Stack *ps) {
    StackNode *pn;
    while (ps->Top != NULL) {
        pn = ps->Top;
        ps->Top = ps->Top->Next;
        free(pn);
        ps->size--;
    }
}

// Get the value of the top element without change the stack.
void StackTop(StackEntry *pe, Stack *ps) {
    *pe = ps->Top->Entry;
}

// Calculate the number of elements in the stack.
int StackSize(Stack *ps) {
    return ps->size;
}

// Traverse stack to do specific job like display all elements in it.
void TraverseStack(Stack *ps, void (*pe)(StackEntry)) {
    StackNode *pn = ps->Top;
    while (pn) {
        (*pe)(pn->Entry);
        pn = pn->Next;
    }
}

#else

#include <stdio.h>
#include <stdlib.h>


// Initialize the stack.
void CreateStack(Stack *ps) {
    ps->Top = 0;
}

// Push an element to the stack.
void Push(StackEntry e, Stack *ps) {
    ps->entries[ps->Top++]=e;
	//ps->entries[ps->Top++] = e;
}

// Pop an element from the stack.
void Pop(StackEntry *pe, Stack *ps) {
    *pe = ps->entries[--(ps->Top)];
}

// Check if the stack is empty or not.
int StackEmpty(Stack *ps) {
    return !(ps->Top);
}

// Check if the stack is full or not.
int StackFull(Stack *ps) {
    return (ps->Top == MaxStack);
}

// Clear stack and destroy all elements in it.
void ClearStack(Stack *ps) {
    ps->Top = 0;
}

// Get the value of the top element without change the stack.
void StackTop(StackEntry *pe, Stack *ps) {
    *pe = ps->entries[ps->Top - 1];
}

// Calculate the number of elements in the stack.
int StackSize(Stack *ps) {
    return ps->Top;
}

// Traverse stack to do specific job like display all elements in it.
void TraverseStack(Stack *ps, void (*pe)(StackEntry)) {
    for (int i = ps->Top; i > 0; i--) {
        (*pe)(ps->entries[i - 1]);
    }
}

#endif
