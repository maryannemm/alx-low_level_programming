#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the lowercase alphabet followed by the uppercase alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowercase = 'a';
    char uppercase = 'A';

    while (lowercase <= 'z')
    {
        putchar(lowercase);
        lowercase++;
    }

    while (uppercase <= 'Z')
    {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');

    return (0);
}
