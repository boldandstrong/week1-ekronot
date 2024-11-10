#ifndef QUEUE_H
#define QUEUE_H


/*
	a queue contains positive integer values.
*/
typedef struct Queue
{
	unsigned int* value;
	unsigned int size;
	unsigned int maxSize;
} Queue;

/*
	this func create the q.
*/
void initQueue(Queue* q, unsigned int size);

/*
	this func clean the q that we init.
*/
void cleanQueue(Queue* q);

/*
	this func add a value from the q.
*/
void enqueue(Queue* q, unsigned int newValue);

/*
	this func this func remove a value from the q. 
*/
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

/*
	this func checks if the q is empty.
*/
bool isEmpty(Queue* s);

/*
	this func checks if the q is full.
*/
bool isFull(Queue* s);

#endif /* QUEUE_H */