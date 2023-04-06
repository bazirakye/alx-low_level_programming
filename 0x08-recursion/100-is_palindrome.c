#include "main.h"

/**
 * last_index  - string count
 *
 * @s: pointer to string
 *
 *
 *Return: int
 */
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - check if string is palindrome
 * checks - check
 * @s: string to check
 *
 * Return: returns 0 if not and 1 if palindrome
 */

int is_palindrome(char *s)
{
	int end = last_index(s)
		;
	return (checks(s, 0, end - 1, end % 2));
}

/**
 * checks - check function
 * @s: string to check
 * @start: start
 * @end: end
 * @pair: pair
 * Return: return 1 for palindrome and 0 if not
 */
int checks(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}

	else
	{
		return (checks(s, start + 1, end - 1, pair));
	}
}
