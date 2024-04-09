#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *                 using the Linear search algorithm
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */
int linear_search(int *array, size_t size, int value)
{
    unsigned int index = 0;

    while (array && index < size)
    {
        printf("Value checked array[%d] = [%d]\n", index, array[index]);

        if (array[index] == value)
        {
            return (index);
        }
        index++;
    }
    return (-1);
}

