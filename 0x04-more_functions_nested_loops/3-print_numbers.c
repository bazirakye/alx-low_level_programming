#include "main.h"

/**
 * print_numbers - function that prints numbers 0 to 9
 *
 * Return: returns nothing
 *
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
