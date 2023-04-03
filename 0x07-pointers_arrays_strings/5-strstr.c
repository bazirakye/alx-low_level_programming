#include "main.h"
#include <stdio.h>
/**
 * _strstr - lacate substrings within a string
 * @haystack: the string to search
 * @needle: substring to search
 * Return: pointer to beginning of substring orelse return null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (i = 0; haystack[i] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
