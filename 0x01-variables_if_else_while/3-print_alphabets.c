#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Description: Prints the lowercase alphabet and then the uppercase
 * alphabet, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }

    c = 'A';

    while (c <= 'Z')
    {
        putchar(c);
        c++;
    }

    putchar('\n');

    return (0);
}
