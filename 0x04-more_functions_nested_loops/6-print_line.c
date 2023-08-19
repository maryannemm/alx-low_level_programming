#include "main.h"

/**
 * print_line - Prints a straight line using '_' character.
 * @n: The number of times the character '_' should be printed.
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    i = 0;
    while (i < n)
    {
        _putchar('_');
        i++;
    }

    _putchar('\n');
}

