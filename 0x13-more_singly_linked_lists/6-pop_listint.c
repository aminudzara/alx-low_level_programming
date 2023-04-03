#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the list
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
