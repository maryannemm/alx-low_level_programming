#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints the elements of an array
 * @array: The array to print
 * @size: The size of the array
 */
void print_array(int *array, size_t size)
{
    size_t i;

    printf("Searching in array:");
    if (size > 0)
    {
        printf(" %d", array[0]);
        i = 1;
        while (i < size)
        {
            printf(", %d", array[i]);
            ++i;
        }
    }
    printf("\n");
}

/**
 * recursive_search - Searches for a value in an array of
 * integers using the Binary search algorithm recursively
 * @array: The array to search
 * @start: The starting index of the array
 * @end: The ending index of the array
 * @value: The value to search for
 * Return: The index of the value if found, otherwise -1
 */
int recursive_search(int *array, size_t start, size_t end, int value)
{
    if (start <= end)
    {
        size_t middle = start + (end - start) / 2;
        print_array(&array[start], end - start + 1);

        if (array[middle] == value)
            return (int)middle;

        if (array[middle] > value)
            return recursive_search(array, start, middle - 1, value);

        return recursive_search(array, middle + 1, end, value);
    }

    return -1;
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return recursive_search(array, 0, size - 1, value);
}

