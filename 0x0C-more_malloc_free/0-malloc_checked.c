#include "main.h"
#include <stdlib>
#include <stdio.h>
/**
 * malloc_checked - allocates memory
 * @b: size of memory to be allocated
 * Return: returns pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
