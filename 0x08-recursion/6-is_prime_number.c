#include "main.h"

/**
 * is_prime_number - function that checks prime numbers
 *
 * @n: number to be checked
 *
 * Return: return 1 if prime number and 0 if not
 *
 */

int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - check all numbers less than n if can divide it
 *
 * @n: number to test
 *
 * @res: checker
 *
 * Return:  return
 */
int check(int n, int res)
{
	if (res >= n && n > 1)
	{
		return (1);
	}
	else if (n % res == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (check(n, res + 1))
}
