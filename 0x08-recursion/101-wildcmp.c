#include "main.h"

/**
 * wildcmp - compairs two strings
 * @s1: string 1
 * @s2: string 2
 * Return: return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
