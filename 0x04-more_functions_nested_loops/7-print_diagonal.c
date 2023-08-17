#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}
