#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print all the element of a list
 * @h: the list
 *
 * Return: the number of nodes
 *
 * Description: print all the elements of a linked list.
 *              If str is NULL, print [0] (nil).
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
