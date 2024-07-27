/**
 **********************************************************************************
 * @file           : queue.h 
 * @author         : Amr Khaled
 * @brief          : queue.h that consists of the prototypes of the functions 
 *                   with the definition of the queue element type QueueEntry 
 * @date           : 11/7/2024
 **********************************************************************************
**/

#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "global.h"

#define LIMITED_MEMORY_1

#ifdef LIMITED_MEMORY_1

// Define the queueNode structure
typedef struct queuenode {
    QueueEntry entry;
    struct queuenode *Next;
} queuenode;

// Define the queue structure
typedef struct queue {
    queuenode *Front;
    queuenode *rear;
    int size;
} Queue;

#else

// Define the queue structure
typedef struct queue {
    int front;
    int rear;
    int size;
    QueueEntry entry[MAXQUEUE];
} Queue;

#endif

// Function prototypes
void CreatQueue(Queue *q);
int QueueEmpty(Queue *q);
int QueueFull(Queue *q);
int QueueSize(Queue *q);
void ClearQueue(Queue *q);
void Append(QueueEntry item, Queue *q);
void Serve(QueueEntry *item, Queue *q);
void Retrieve(QueueEntry *item, Queue *q);
void TraverseQueue(Queue *q, void (*func)(QueueEntry));

#endif // _QUEUE_H_
