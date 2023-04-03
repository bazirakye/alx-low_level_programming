#include "main.h"

/**
 * _strspn - returns howmay times the string occurs
 * @s: string to search
 * @accept: character to match
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length = 0;

	for (i = 0; s[i] >= '\0'; j++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (length);
}
