#include "function_pointers.h"

/**
 * int_index - function that serches integers
 *
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: functional pointer to compare if int exisits
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
