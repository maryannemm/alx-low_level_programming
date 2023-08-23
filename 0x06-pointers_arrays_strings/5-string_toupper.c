#include "main.h"

/**
 * string_toupper - Converts lowercase letters in a string to uppercase.
 * @str: The string to be converted.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
    char *temp = str;

    while (*temp != '\0')
    {
        if (*temp >= 'a' && *temp <= 'z')
            *temp = *temp - ('a' - 'A');
        
        temp++;
    }

    return str;
}
