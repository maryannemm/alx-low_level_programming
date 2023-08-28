#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr = s;

	while (*s_ptr != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s_ptr == *accept_ptr)
			{
				return (s_ptr);
			}
			accept_ptr++;
		}

		s_ptr++;
	}

	return (NULL);
}
