#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function to excecute different actions in array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 *
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}