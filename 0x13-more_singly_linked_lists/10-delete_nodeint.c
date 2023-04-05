#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: the linked list
 * @index: the index of the node that should be deleted, index starts from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i;


	if (*head == NULL || head == NULL)
		return (-1);

	for (i = 0; i != index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
			return (-1);
	if (previous == NULL)
	{
		*head = current->next;
		return (-1);
	}
	else
	{
		previous->next = current->next;
		return (1);
	}
} 
