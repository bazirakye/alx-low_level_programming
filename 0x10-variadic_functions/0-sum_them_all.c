#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments passed into the function
 * @n: number of arguments
 * Return: sum or null if no arguments passed through
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int sum = 0;
	int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
