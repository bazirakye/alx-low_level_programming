#include "main.h"
/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: char to initialize
 * Return: pointer or null
 *
 */
char *create_array(unsigned int size, char c)
{
	char *m = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
		return (0);
	for (i = 0; i < size; i++)
		m[size] = c;
	return (m);
}