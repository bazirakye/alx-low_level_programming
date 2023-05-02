#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at any part of the list
 * @head: head node
 * @idx: index of node position (starts at 0)
 * @n: data to be inserted in the list
 * Return: Return address of new node or 0 if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *current = *head;

	listint_t *new_node;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	if (current == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
		current = current->next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
