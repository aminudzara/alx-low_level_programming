#include "lists.h"
#include <stdlib.h>

/**
 * list_len - calculate the number of elements in a linked list
 * @h: the linked list
 *
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
