#include "main.h"

/**
* _isupper - A function that checks for uppercase character.
* @c: An input character
* Return: 1 if c is uppercase or 0 otherwise
*/

int _isupper(int c)
{
	char uppercase = 'A';

	int isupper;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
		}
		else
		{
			isupper = 0;
		}
	}

	return (isupper);
}
