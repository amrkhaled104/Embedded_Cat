#include "stack.h"

#ifdef LIMITED_MEMORY_2

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static int MinNow = INT_MAX;
static int Minprev = INT_MAX;

void FisrtElement(StackEntry *pe,Stack *ps)
{
	StackNode *Help=ps->Top;
	while(Help) {
		*pe=Help->Entry;
		Help=Help->Next;
	}
	
	
}
int FindMin(Stack *ps) {
    return MinNow;
}

void Copystack(Stack ps1,Stack *ps2) {
    Stack HP;
	CreateStack(&HP);
	StackEntry e;
	while(!StackEmpty(&ps1))
	{
		Pop(&e, &ps1);
        Push( e, &HP);
	}
	while(!StackEmpty(&HP))
	{
		Pop(&e, &HP);
        Push( e, ps2);
	}
}

void CreateStack(Stack *ps) {
    ps->Top = NULL;
    ps->size = 0;
}

void Push(StackEntry e, Stack *ps) {
    StackNode *pn = (StackNode *)malloc(sizeof(StackNode));
    pn->Entry = e;
    pn->Next = ps->Top;
    ps->Top = pn;
    ps->size++;
    if (e < MinNow) {
        Minprev = MinNow;
        MinNow = e;
    }
}

void Pop(StackEntry *pe, Stack *ps) {
    StackNode *pn;
    *pe = ps->Top->Entry;
    pn = ps->Top;
    ps->Top = ps->Top->Next;
    free(pn);
    ps->size--;
    if (*pe == MinNow) {
        MinNow = Minprev;
    }
}

int StackEmpty(Stack *ps) {
    return ps->Top == NULL;
}

int StackFull(Stack *ps) {
    return 0;
}

void ClearStack(Stack *ps) {
    StackNode *pn;
    while (ps->Top != NULL) {
        pn = ps->Top;
        ps->Top = ps->Top->Next;
        free(pn);
        ps->size--;
    }
}

void StackTop(StackEntry *pe, Stack *ps) {
    *pe = ps->Top->Entry;
}

int StackSize(Stack *ps) {
    return ps->size;
}

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

int FindMin(Stack *ps) {
    return 0;
}
void CreateStack(Stack *ps) {
    ps->Top = 0;
}

void Push(StackEntry e, Stack *ps) {
    ps->entries[ps->Top++] = e;
}

void Pop(StackEntry *pe, Stack *ps) {
    *pe = ps->entries[--(ps->Top)];
}

int StackEmpty(Stack *ps) {
    return !(ps->Top);
}

int StackFull(Stack *ps) {
    return (ps->Top == MaxStack);
}

void ClearStack(Stack *ps) {
    ps->Top = 0;
}

void StackTop(StackEntry *pe, Stack *ps) {
    *pe = ps->entries[ps->Top - 1];
}

int StackSize(Stack *ps) {
    return ps->Top;
}

void TraverseStack(Stack *ps, void (*pe)(StackEntry)) {
    for (int i = ps->Top; i > 0; i--) {
        (*pe)(ps->entries[i - 1]);
    }
}

#endif
