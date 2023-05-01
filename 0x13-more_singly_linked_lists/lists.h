#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - structure storing int data and a pointer
 * @n: our data
 * @next: pointer to the next node
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;

size_t print_listint(const listint_t *h);

#endif
