#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - recursive function to print the string
 * @s: pointer to the character
 * return: returns at base case
 */
void put_char(char c)
{
	write(1, &c, 1);
}

void _puts_recursion(char *s)
{
	if  (*s == '\0')
		return;
	putchar(*s);
	_puts_recursion(*s + 1);
}
