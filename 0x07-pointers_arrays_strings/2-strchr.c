#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    char *ptr = s;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            return ptr;
        }
        ptr++;
    }

    if (*ptr == c)
    {
        return ptr;
    }

    return NULL;
}
