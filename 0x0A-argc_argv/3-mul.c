#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 for true
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
