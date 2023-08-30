#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: The string to be checked.
 * @start: The index of the start of the current comparison.
 * @end: The index of the end of the current comparison.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
	{
		return (1);
	}

	return (is_palindrome_recursive(s, 0, length - 1));
}
