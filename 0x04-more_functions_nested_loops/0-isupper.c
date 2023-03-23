#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 *
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	char uppercase = 'A';

	int isupper;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper == 1;
		}
		else
		{
			isupper == 0;
		}
	}
		return (isupper);
}
