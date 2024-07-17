
/**
 **********************************************************************************
 * @file           : queue.c >> Array-Based Implementation
 * @author         : Amr Khaled
 * @brief          : queue.c that consists of the implementation of the functions 
 * @date           : 11/7/2023
 **********************************************************************************
**/

#include "queue.h"

//initialize the queue.
void CreatQueue(Queue *pq)
{
	pq->front = 0;
	pq->rear = 0;
	pq->size = 0;
}

//check if the queue is empty or not.
int QueueEmpty(Queue *pq)
{
	return !(pq->size);
}

//check if the queue is full or not.
int QueueFull(Queue *pq)
{
	return (pq->size == MAXQUEUE);
}

//calculate the number of elements in the queue.
int QueueSize(Queue *pq)
{
	return pq->size;
}

//clear queue and destory all elements in it.
void ClearQueue(Queue *pq)
{
	CreatQueue(pq);
}

//append an element to the queue. (FIFO)
void Append(QueueEntry e,Queue *pq)
{
	pq->entry[pq->rear] = e;
	pq->rear = ((pq->rear) + 1) % MAXQUEUE;
	pq->size++;
}

//serve an element from the queue. (FIFO)
void Serve(QueueEntry *pe,Queue *pq)
{
	*pe = pq->entry[pq->front];
	pq->front = ((pq->front) + 1) % MAXQUEUE; 	
	pq->size--;
}

//get the value of the first element in the queue without change it.
void Retrieve(QueueEntry *pe,Queue *pq)
{
	*pe = pq->entry[pq->front];
}

//travese queue to do specific function like display all elements in it.
void TraverseQueue(Queue *pq,void (*pf)(QueueEntry))
{
	int postion, i;
	postion = pq->front;
	for(int i = 0; i < pq->size; i++)
	{
		(*pf)(pq->entry[postion]);
		postion = (postion + 1) % MAXQUEUE;
	}
}
