#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory area that is to be filled
 * @b: value to be set
 * @n: number of bytes to be set
 * Return: returns pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++ n--)
	{
		s[i] = b;

		return (s);
	}
