#include "main.h"

/**
 * _pow_recursion - function to retuen powers
 *
 * @x: base number
 *
 * @y: power
 *
 * Return: return x power y
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y-1));
