#include "main.h"

/**
 * rot13 - Encodes a string using the rot13 cipher.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *rot13(char *str)
{
    int i;
    char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char rot13_letters[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    i = 0;
    while (str[i] != '\0')
    {
        int j = 0;
        while (letters[j] != '\0')
        {
            if (str[i] == letters[j])
            {
                str[i] = rot13_letters[j];
                break;
            }
            j++;
        }
        i++;
    }

    return str;
}
