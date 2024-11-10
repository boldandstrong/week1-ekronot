#include "stack.h"

void push(Stack* s, unsigned int element)
{
	s->list = pushList(s->list, element);
}

int pop(Stack* s) // Return -1 if stack is empty
{
	if (s->list != NULL)
	{
		int value = s->list->value;

		s->list = popList(s->list);

		return value;
	}
	else
	{
		return -1;
	}
}

void initStack(Stack* s)
{
	s->list = NULL;
}

void cleanStack(Stack* s)
{
	while (s->list)
	{
		s->list = popList(s->list);

		if (s->list == NULL)
		{
			break;
		}

		s->list = s->list->next;
	}
}

bool isEmpty(Stack* s)
{
	return s->list == NULL;
}

bool isFull(Stack* s)
{
	return false;
}
