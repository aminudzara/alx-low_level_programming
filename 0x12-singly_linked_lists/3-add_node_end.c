#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list
 * @head: the address of the first element of the list
 * @str: the string to add to the list
 * Return: the address of the new element, or
 * NULL if the function fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (new);
}
