#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - recursive function to print the string
 * put_char - whrite character
 * @s: pointer to the character
 * @c: argument to the put_char function
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
	put_char(*s);
	_puts_recursion(s + 1);
}
int main void()
{
	_puts_recursion();
	put_char('\n');
	return (0);
}
