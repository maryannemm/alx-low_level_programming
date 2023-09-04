#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    int len1 = 0, len2 = 0, i = 0, j = 0;
    char *concatenated;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;

    while (s2[len2])
        len2++;

    concatenated = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

    if (concatenated == NULL)
        return (NULL);

    while (i < len1)
    {
        concatenated[i] = s1[i];
        i++;
    }

    while (j < len2)
    {
        concatenated[i + j] = s2[j];
        j++;
    }

    concatenated[i + j] = '\0';

    return (concatenated);
}

