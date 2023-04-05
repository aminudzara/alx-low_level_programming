#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head of the list to reverse
 * 
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head)->next = prev;
	return (*head);
}
