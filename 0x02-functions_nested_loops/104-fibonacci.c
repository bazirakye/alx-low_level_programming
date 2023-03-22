#include <stdio.h>
/**
* printFibonacciNumbers - prints fibbo numbers from 1-98
* @n: An input integer valuevoid printFibonacciNumbers(int n)
* Return: Nothing
*/

void printFibonacciNumbers(int n)
{
	int f1 = 1, f2 = 2, i;

	int next;

	next = f1 + f2;

	printf("%d, ", f1);
	printf("%d, ", f2);

	for (i = 1; i <= n; ++i)
	{
		printf("%d, ", next);

		f1 = f2;
		f2 = next;
		next = f1 + f2;
	}
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	printFibonacciNumbers(98);

	return (0);

}
