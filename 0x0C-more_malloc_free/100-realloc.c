#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 *         If new_size == old_size, returns ptr.
 *         If new_size is zero and ptr is not NULL, returns NULL and frees ptr.
 *         If ptr is NULL, equivalent to malloc(new_size).
 *         If malloc fails, returns NULL and frees ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	i = 0;
	while (i < old_size && i < new_size)
	{
		new_ptr[i] = ((char *)ptr)[i];
		i++;
	}

	free(ptr);

	return (new_ptr);
}

