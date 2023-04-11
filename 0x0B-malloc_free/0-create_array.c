#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: char to initialize
 * Return: pointer or null
 *
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	m = malloc(size * sizeof(char));

	if (size == 0 || m == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		m[size] = c;
	return (m);
}
