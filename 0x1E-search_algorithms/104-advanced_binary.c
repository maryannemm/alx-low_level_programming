#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints an array
 * @array: Pointer to the first element of the array
 * @start: The starting index of the array to print
 * @end: The ending index of the array to print
 */
void print_array(int *array, size_t start, size_t end)
{
    printf("Searching in array: ");
    if (start <= end)
    {
        printf("%d", array[start]);
        if (start < end)
        {
            printf(", ");
            print_array(array, start + 1, end);
        }
        else
            printf("\n");
    }
}

/**
 * advanced_binary_recursive - Searches for a value in a sorted array of integers
 * using binary search algorithm
 * @array: Pointer to the first element of the array
 * @low: The starting index of the array
 * @high: The ending index of the array
 * @value: The value to search for
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
    size_t mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        print_array(array, low, high);

        if (array[mid] == value)
        {
            if (mid == low || array[mid - 1] != value)
                return mid;
            else
                return advanced_binary_recursive(array, low, mid, value);
        }
        else if (array[mid] < value)
            return advanced_binary_recursive(array, mid + 1, high, value);
        else
            return advanced_binary_recursive(array, low, mid - 1, value);
    }
    return -1;
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;
    return advanced_binary_recursive(array, 0, size - 1, value);
}

