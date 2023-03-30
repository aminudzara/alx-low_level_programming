#include "lists.h"
#include <stdlib.h>
#include <string.h>

int _strlen(const char *);

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: the first element in the list
 * @str: the value of the new node
 * Return: address of the new element, or
 * NULL if the function fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}

/**
 * _strlen - calculate length of a string
 * @s: the string the measure
 *
 * Return: the length of str
 */
int _strlen(const char *s)
{
	unsigned int count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
