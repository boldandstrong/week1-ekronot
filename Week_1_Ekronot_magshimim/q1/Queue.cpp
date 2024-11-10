#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->value = new unsigned int[size];
	q->maxSize = size;
	q->size = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->value;
	q->size = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	q->value[q->size] = newValue;
	q->size++;
}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	if (q->size)
	{
		int i = 0;
		int first_value = q->value[0];
		int size = q->size;

		for (i = 0; i <= size - 1; i++)
		{
			q->value[i] = q->value[i + 1];
		}
		
		q->size--;

		return first_value;
	}
	else
	{
		return -1;
	}
}

bool isEmpty(Queue* s)
{
	if (!(s->size))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull(Queue* s)
{
	if (s->maxSize == s->size)
	{
		return true;
	}
	else
	{
		return false;
	}
}
