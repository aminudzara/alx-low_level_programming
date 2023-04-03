#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - count the number of elements in a linked list
 * @h: the linked list
 *
 * Return: the number of element in h
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	for (n = 0; h != NULL;)
	{
		n++;
		h = h->next;
	}
	return (n);
}
