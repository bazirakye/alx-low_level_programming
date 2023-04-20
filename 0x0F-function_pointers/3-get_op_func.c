#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - choosing the function for the pointer
 *
 * @s: the operator
 *
 * Return: return a function or error
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}

	int i;

	i = 0;

	while (ops[i].op)
	{
		if (ops[i].op[0] == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
