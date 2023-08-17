#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (int row = 1; row <= size; row++)
    {
        for (int space = 1; space <= size - row; space++)
        {
            _putchar(' ');
        }

        for (int hash = 1; hash <= row; hash++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}
