#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <iostream>

typedef struct linkedList
{
	unsigned int value;
	linkedList* next;
} linkedList;

/*
	this func adds a unit to the linked list.
*/
linkedList* pushList(linkedList* list, unsigned int newValue);

/*
	this func removes a unit to the linked list.
*/
linkedList* popList(linkedList* list);

#endif LINKEDLIST_H /* LINKEDLIST_H */