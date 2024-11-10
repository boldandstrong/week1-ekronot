#include "linkedList.h"

linkedList* pushList(linkedList* list, unsigned int newValue)
{
    linkedList* newHead = new linkedList;

    newHead->value = newValue;
    newHead->next = list;

    return newHead;
}


linkedList* popList(linkedList* list)
{
    if (list == NULL)
    {
        return NULL;
    }

    if (list->next == NULL)
    {
        delete list;
        return NULL;
    }

    linkedList* newHead = list->next;

    delete list;

    return newHead;
}