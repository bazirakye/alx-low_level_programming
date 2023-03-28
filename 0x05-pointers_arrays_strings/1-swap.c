#include "main.h"
/**
 * swap_int - Swap two integers funtions
 * @a: first parameter
 * @b: second parameter
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *b;

	*b = *a;

	*a = hold;
}
