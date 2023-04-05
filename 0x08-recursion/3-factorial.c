#include "main.c"

/**
 * factorial - function that returns factorial
 *
 * @n: the number to get its factorial
 *
 * Return: return factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
