#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: The size of the array.
 * @action: Pointer to the function to execute on each element.
 *
 * Description: This function iterates through each element of the array and
 *              applies the given function 'action' to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

