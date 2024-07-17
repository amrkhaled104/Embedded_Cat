/**
 **********************************************************************************
 * @file           : stack.c >> Array-Based Implementation
 * @author         : Amr Khaled
 * @brief          : stack.c that consists of the implementation of the functions 
 * @date           : 22/6/2024
 **********************************************************************************
**/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "stack.h"

// initialize the stack.
void CreateStack(Stack *ps) {
    ps->Top = 0;
}

// push an element to the stack
void Push(StackEntry e, Stack *ps) {
    ps->entry[ps->Top++] = e;
}

// pop an element from the stack
void Pop(StackEntry *pe, Stack *ps) {
    *pe = ps->entry[--(ps->Top)];
}

// check if the stack is empty or not
int StackEmpty(Stack *ps) {
    return !(ps->Top);
}

// check if the stack is full or not
int StackFull(Stack *ps) {
    return (ps->Top == MaxStack);
}

// clear stack and destroy all elements in it
void ClearStack(Stack *ps) {
    ps->Top = 0;
}

/*
pre  conditions: stack is initialized and not empty
post conditions: the last element is returned without change the stack
*/
void StackTop(StackEntry *pe, Stack *ps) {
    *pe = ps->entry[ps->Top - 1];
}

// calculate the number of elements in the stack
int StackSize(Stack *ps) {
    return ps->Top;
}

// traverse stack to do specific job like display all elements in it.
void TraverseStack(Stack *ps, void (*pe)(StackEntry)) {
    for (int i = ps->Top; i > 0; i--) {
        (*pe)(ps->entry[i - 1]);
    }
}
