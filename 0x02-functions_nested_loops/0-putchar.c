#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar\n";
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}	        
	
	return (0);
}

/**
 * _putchar - writes a character to the standard output
 * @c: The character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (putchar(c));
}
