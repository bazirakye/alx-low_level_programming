#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - prints two strings
 * @separator: the string to be printed between the two strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	char *str;

	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)\n");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
