#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *ptr_h = haystack;
    char *ptr_n = needle;

    while (*ptr_h != '\0')
    {
        ptr_n = needle;

        while (*ptr_n != '\0' && *ptr_h == *ptr_n)
        {
            ptr_h++;
            ptr_n++;
        }

        if (*ptr_n == '\0') /* Found the substring */
        {
            return haystack;
        }

        ptr_h++;
    }

    return NULL; /* Substring not found */
}
