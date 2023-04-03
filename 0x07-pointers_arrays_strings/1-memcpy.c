#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy;
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
