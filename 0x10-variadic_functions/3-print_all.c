#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a character
 * @arg: arguments list
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);

	printf("%c", letter);
}
/**
 * print_int - prints an interger
 * @arg: argument list
 */
void print_int (va_list arg)
{
	char number;

	number = va_arg(arg, int);

	printf("%d", number);
}
/**
 * print_float - prints a float
 * @arg: argument list
 */
void print_float(va_list arg)
{
	float flt;

	flt = va_arg(arg, double);

	printf("%f", flt);
}
/**
 * print_string - print string
 * @arg: argument list
 */
void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char*);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}
/**
 * print_all - print all
 * @format: any formart list
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;

	int j = 0;

	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
