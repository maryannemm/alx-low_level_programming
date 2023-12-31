#include "main.h"

/**
 * _strncpy - Copies up to n bytes of the source string to the destination.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to be copied.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

