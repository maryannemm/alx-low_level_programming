#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
    int length = 0;
    int start_index;

    while (str[length] != '\0')
        length++;

    start_index = length / 2;
    if (length % 2 == 1)
        start_index++;

    while (str[start_index] != '\0')
    {
        _putchar(str[start_index]);
        start_index++;
    }

    _putchar('\n');
}
