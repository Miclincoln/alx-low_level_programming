#include <stdio.h>
#include "lists.h"

/**
* list_len - A function to the return the number of elements in a linked list
* @h: points to node
* Return: number of nodes
**/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
