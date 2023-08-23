#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
    int i, j;
    char letters[] = "AEOTLaeotl";
    char leet_numbers[] = "4307143071";

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (letters[j] != '\0')
        {
            if (str[i] == letters[j])
                str[i] = leet_numbers[j];
            j++;
        }
        i++;
    }

    return str;
}
