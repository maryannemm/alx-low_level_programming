#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
    char *duplicate;
    unsigned int length = 0;
    unsigned int i = 0;

    if (str == NULL)
        return NULL;

    while (str[length] != '\0')
        length++;

    duplicate = (char *)malloc(sizeof(char) * (length + 1));

    if (duplicate == NULL)
        return NULL;

    while (i < length)
    {
        duplicate[i] = str[i];
        i++;
    }

    duplicate[length] = '\0';

    return duplicate;
}

