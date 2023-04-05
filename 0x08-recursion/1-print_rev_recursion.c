#include <unistd.h>
#include "main.h"

/**
 * put_char - print a character
 * @c: character to be printed
 */

void put_char(char c)
{
	write(1, &c, 1);
}

/**
 * _print_rev_recursion - function to print in reverse
 * @s: pointer to character
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	put_char(*s);
}
