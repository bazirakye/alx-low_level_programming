#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements in a list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t  num_of_nodes = 0;


	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
