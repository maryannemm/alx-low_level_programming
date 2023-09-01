#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    if (argc > 0)
        _puts(argv[0]);

    return (EXIT_SUCCESS);
}

/**
 * _puts - Prints a string to stdout
 * @str: The string to be printed
 */
void _puts(char *str)
{
    while (*str)
        _putchar(*str++);

    _putchar('\n');
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 */
void _putchar(char c)
{
    write(1, &c, 1);
}
