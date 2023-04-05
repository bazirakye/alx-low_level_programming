#include <unistd.h>
#include "main.h"

/**
 * put_char - print a character
 * _print_rev_recursion - print letters in reverse
 * @c: character to be printed
 * @s: pointer to character
 */

void put_char(char c)
{
	write(1, &c, 1);
}

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	put_char(*s);
}
