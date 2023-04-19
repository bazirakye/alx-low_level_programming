#include "function_pointers.h"

/**
 * array_iterator - function to excecute different actions in array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 *
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	if (array && size && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
