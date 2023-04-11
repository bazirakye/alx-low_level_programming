#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: retur 0 for success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
