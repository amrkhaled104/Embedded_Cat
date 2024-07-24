#include "list.h"
#include <stdlib.h>

void CreateList(List *pl) {
    pl->Head = NULL;
    pl->size = 0;
}

int ListEmpty(List *pl) {
    return !pl->size;
}

int ListFull(List *pl) {
    return 0; 
}

int ListSize(List *pl) {
    return pl->size;
}

void DestroyList(List *pl) {
    listnode *Help;
    while (pl->Head) {
        Help = pl->Head->Next;
        free(pl->Head);
        pl->Head = Help;
    }
    pl->size = 0;
}

int InsertList(int pos, ListEntry e, List *pl) {
    listnode *Help, *pNew;
    if ((pNew = (listnode *)malloc(sizeof(listnode)))) {
        pNew->entry = e;
        pNew->Next = NULL;
        if (pos == 0) {
            pNew->Next = pl->Head;
            pl->Head = pNew;
        } else {
            Help = pl->Head;
            for (int i = 0; i < pos - 1; i++) {
                Help = Help->Next;
            }
            pNew->Next = Help->Next;
            Help->Next = pNew;
        }
        pl->size++;
        return 1;
    } else {
        return 0;
    }
}

void DeleteList(int pos, ListEntry *pe, List *pl) {
    listnode *Help1, *Help2;
    if (pos == 0) {
        *pe = pl->Head->entry;
        Help1 = pl->Head->Next;
        free(pl->Head);
        pl->Head = Help1;
    } else {
        Help2 = pl->Head;
        for (int i = 0; i < pos - 1; i++) {
            Help2 = Help2->Next;
        }
        *pe = Help2->Next->entry;
        Help1 = Help2->Next->Next;
        free(Help2->Next);
        Help2->Next = Help1;
    }
    pl->size--;
}

void TraverseList(List *pl, void (*Visit)(ListEntry)) {
    listnode *p = pl->Head;
    while (p) {
        (*Visit)(p->entry);
        p = p->Next;
    }
}

void RetrieveList(int pos, ListEntry *pe, List *pl) {
    listnode *Help2 = pl->Head;
    for (int i = 0; i < pos; i++) {
        Help2 = Help2->Next;
    }
    *pe = Help2->entry;
}

void ReplaceList(int pos, ListEntry e, List *pl) {
    listnode *Help2 = pl->Head;
    for (int i = 0; i < pos; i++) {
        Help2 = Help2->Next;
    }
    Help2->entry = e;
}
