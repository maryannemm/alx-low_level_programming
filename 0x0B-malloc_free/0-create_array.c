#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0)
        return (NULL);

    array = (char *)malloc(sizeof(char) * size);

    if (array == NULL)
        return (NULL);

    i = 0;
    
    while (i < size)
    {
        array[i] = c;
        i++;
    }

    return (array);
}

