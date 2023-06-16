#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - to return elements in a linked list
 * @h: head pointer
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		num_of_elements++;

		h = h->next;
	}
	return (num_of_elements);
}
