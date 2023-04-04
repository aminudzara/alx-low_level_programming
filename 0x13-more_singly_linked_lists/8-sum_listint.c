#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all the data (n) of a linked list
 * @head: the first node of the list
 *
 * Return: the sum of all (n)s of the list,
 *         or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
