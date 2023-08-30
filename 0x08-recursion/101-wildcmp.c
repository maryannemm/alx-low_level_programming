#include "main.h"

/**
 * wildcmp_recursive - Compares two strings with possible wildcards recursively.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if strings can be considered identical, otherwise 0.
 */
int wildcmp_recursive(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		if (*(s1 + 1) != '\0' && wildcmp_recursive(s1 + 1, s2))
		{
			return (1);
		}
		return (wildcmp_recursive(s1, s2 + 1));
	}

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (1);
		}
		return (wildcmp_recursive(s1 + 1, s2 + 1));
	}

	return (0);
}

/**
 * wildcmp - Compares two strings with possible wildcards.
 * @s1: The first string to compare.
 * @s2: second string to compare.
 * Return: 1 if strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
	{
		return (1);
	}

	return (wildcmp_recursive(s1, s2));
}
