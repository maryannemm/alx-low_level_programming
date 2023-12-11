#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to the first occurrence in s of any byte in accept
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        for (int i = 0; accept[i]; i++) {
            if (*s == accept[i]) {
                return s;
            }
        }
        s++;
    }
    return NULL;
}

