#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * @head: heaad of alinked list
 * @str: string to store in the list
 * Return: return address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	size_t nchar;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
