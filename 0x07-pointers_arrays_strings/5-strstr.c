#include "main.h"

/**
 * _strstr - lacate substrings within a string
 * @haystack: the string to search
 * @needle: substring to search
 * Return: pointer to beginning of substring orelse return null
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr1, *ptr2, *ptr3;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		ptr1 = haystack;
		ptr2 = needle;

		while (*ptr1 != '\0' && *ptr2 != '\0' && *ptr1 == *ptr2)
		{
			++ptr1;
			++ptr2;
		}
		if (*ptr == '\0')
			return (haystack);
		++haystack;
	}
	return (NULL);
}
