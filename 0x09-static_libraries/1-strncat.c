#include "main.h"
/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to use from src.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	/* Get the length of the destination string */
	while (*(dest + dest_len) != '\0')
		dest_len++;

	/* Copy the source string to the end of the destination string */
	for (i = 0; *(src + i) != '\0' && i < n; i++)
		*(dest + dest_len + i) = *(src + i);

	/* Add a null terminator at the end */
	*(dest + dest_len + i) = '\0';

	return (dest);
}
