#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -  prints the name function
 * @name: character array for name to be printed
 * @f: function pointer that takes in character array as argument and points to functionthat prints a name
 */

void print_name(char *name, (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
