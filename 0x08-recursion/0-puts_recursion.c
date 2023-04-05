#include "main.h"
#include <unistd.h>

/**
 *
 * put_char - whrite character
 *
 * @c: argument to the put_char function
 * return: returns at base case
 */
void put_char(char c)
{
	write(1, &c, 1);
}
/**
 * _puts_recursion -recursive function forthe string
 *
 * @s: pointer to character in the string
 *
 */
void _puts_recursion(char *s)
{
	if  (*s == '\0')
		return;
	put_char(*s);
	_puts_recursion(s + 1);
}
