#include "lists.h"

/**
 * sum_dlistint - returns suf of all data of a linked list
 * @head: head pointer
 * Return: 0 if the list is empty, sum of all data if the lis exists
 */

int sum_dlistint(dlistint_t *head)
{

	int sum;

	dlistint_t *current = head;

	sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
