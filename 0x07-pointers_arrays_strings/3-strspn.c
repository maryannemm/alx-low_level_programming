#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The bytes that are considered part of the prefix.
 *
 * Return: The number of bytes in the initial segment of s that consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    char *ptr_s = s;
    unsigned int count = 0;
    int found = 1; /* Assume found initially */

    while (*ptr_s != '\0' && found)
    {
        char *ptr_accept = accept;
        found = 0;

        while (*ptr_accept != '\0')
        {
            if (*ptr_s == *ptr_accept)
            {
                count++;
                found = 1;
                break;
            }
            ptr_accept++;
        }

        if (!found)
        {
            break;
        }

        ptr_s++;
    }

    return count;
}
