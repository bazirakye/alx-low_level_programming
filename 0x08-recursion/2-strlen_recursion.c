#include "main.h"

/**
 * _strlen_recursion - function returns the lenth of the string
 *
 * @s: pointer to a string whose length is to be calculated
 *
 * Return: the lenth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(1 + s));
}
