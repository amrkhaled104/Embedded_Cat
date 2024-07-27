/**
 **********************************************************************************
 * @file           : queue.c 
 * @author         : Amr Khaled
 * @brief          : queue.c that consists of the implementation of the functions 
 * @date           : 11/7/2024
 **********************************************************************************
**/

#include <stdlib.h>
#include "queue.h"

#ifdef LIMITED_MEMORY_1

// Initialize the queue.
void CreatQueue(Queue *pq) {
    pq->Front = NULL;
    pq->rear = NULL;
    pq->size = 0;
}

// Check if the queue is empty or not.
int QueueEmpty(Queue *pq) {
    return pq->rear == NULL;
}

// Check if the queue is full or not.
int QueueFull(Queue *pq) {
    return 0;
}

// Calculate the number of elements in the queue.
int QueueSize(Queue *pq) {
    return pq->size;
}

// Clear queue and destroy all elements in it.
void ClearQueue(Queue *pq) {
    while (pq->Front != NULL) {
        pq->rear = pq->Front->Next;
        free(pq->Front);
        pq->Front = pq->rear;
    }
    pq->size = 0;
}

// Append an element to the queue. (FIFO)
void Append(QueueEntry e, Queue *pq) {
    queuenode *pn = (queuenode *)malloc(sizeof(queuenode));
    pn->entry = e;
    pn->Next = NULL;
    if (!pq->Front) pq->Front = pn;
    else pq->rear->Next = pn;
    pq->rear = pn;
    pq->size++;
}

// Serve an element from the queue. (FIFO)
void Serve(QueueEntry *pe, Queue *pq) {
    *pe = pq->Front->entry;
    queuenode *pn = pq->Front;
    pq->Front = pq->Front->Next;
    free(pn);
    if (!pq->Front) pq->rear = NULL;
    pq->size--;
}

// Get the value of the first element in the queue without change it.
void Retrieve(QueueEntry *pe, Queue *pq) {
    *pe = pq->Front->entry;
}

// Traverse queue to do specific function like display all elements in it.
void TraverseQueue(Queue *pq, void (*pf)(QueueEntry)) {
    for (queuenode *pn = pq->Front; pn; pn = pn->Next) {
        (*pf)(pn->entry);
    }
}

#else

// Initialize the queue.
void CreatQueue(Queue *pq) {
    pq->front = 0;
    pq->rear = 0;
    pq->size = 0;
}

// Check if the queue is empty or not.
int QueueEmpty(Queue *pq) {
    return !(pq->size);
}

// Check if the queue is full or not.
int QueueFull(Queue *pq) {
    return (pq->size == MAXQUEUE);
}

// Calculate the number of elements in the queue.
int QueueSize(Queue *pq) {
    return pq->size;
}

// Clear queue and destroy all elements in it.
void ClearQueue(Queue *pq) {
    CreatQueue(pq);
}

// Append an element to the queue. (FIFO)
void Append(QueueEntry e, Queue *pq) {
    pq->entry[pq->rear] = e;
    pq->rear = (pq->rear + 1) % MAXQUEUE;
    pq->size++;
}

// Serve an element from the queue. (FIFO)
void Serve(QueueEntry *pe, Queue *pq) {
    *pe = pq->entry[pq->front];
    pq->front = (pq->front + 1) % MAXQUEUE;
    pq->size--;
}

// Get the value of the first element in the queue without change it.
void Retrieve(QueueEntry *pe, Queue *pq) {
    *pe = pq->entry[pq->front];
}

// Traverse queue to do specific function like display all elements in it.
void TraverseQueue(Queue *pq, void (*pf)(QueueEntry)) {
    int position = pq->front;
    for (int i = 0; i < pq->size; i++) {
        (*pf)(pq->entry[position]);
        position = (position + 1) % MAXQUEUE;
    }
}

#endif
