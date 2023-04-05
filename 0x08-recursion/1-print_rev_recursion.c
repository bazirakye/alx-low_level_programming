#include <unistd.h>
#include "main.h"

/**
 * _putchar - print a character
 * _print_rev_recursion - print letters in reverse
 * @c: character to be printed
 * @s: pointer to character
 */

int _putchar(char c)
{
	write(1, &c, 1);
}

void _print_rev_recursion(char *s)
{
	if (*s =='\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
