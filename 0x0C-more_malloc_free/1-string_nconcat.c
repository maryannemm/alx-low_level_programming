#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         If memory allocation fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
    char *concatenated;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;

    while (s2[len2])
        len2++;

    if (n >= len2)
        n = len2;

    concatenated = malloc(sizeof(char) * (len1 + n + 1));

    if (concatenated == NULL)
    {
        return (NULL);
    }

    while (*s1)
    {
        concatenated[i++] = *s1;
        s1++;
    }

    while (j < n)
    {
        concatenated[i++] = s2[j++];
    }

    concatenated[i] = '\0';

    return (concatenated);
}

