#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"
#include <iostream>
using namespace std;

/*
	a stack that uses a linked list in order to work.
*/
typedef struct Stack
{
	linkedList* list;

} Stack;

/*
	this func adds a unit to the linked list.
*/
void push(Stack* s, unsigned int element);
/*
	this func removes a unit to the linked list.
*/
int pop(Stack* s); // Return -1 if stack is empty

/*
	this func create a linked list.
*/
void initStack(Stack* s);

/*
	this func that clean the linked list.
*/
void cleanStack(Stack* s);

/*
	this func adds that checks if the stack is empty.
*/
bool isEmpty(Stack* s);

/*
	this func adds that checks if the stack is full.
	always retrun false because there is no limit to the stack.
*/
bool isFull(Stack* s);	

#endif // STACK_H