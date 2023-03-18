#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Description: Prints the lowercase alphabet (except for 'q' and 'e')
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c;
    for (c = 'a'; c <= 'z'; c++)
    {
        if (c != 'e' && c != 'q')
        {
            putchar(c);
        }
    }

    putchar('\n');
    return (0);
}
