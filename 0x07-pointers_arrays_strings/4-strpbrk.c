#include "main.h"

/**
 * _strpbrk - search a string for a set of bytes
 * @s: string to be serched
 * @accept: bytes to search for
 * Return: if it finds much return pointer orelse null
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; ++p)
		{
			if (*s == *p)
				return (s);
		}
		++s;
	}
	return (0);
}
