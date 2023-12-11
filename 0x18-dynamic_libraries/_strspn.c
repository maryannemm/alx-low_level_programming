#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: characters to include
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int found = 1;
    while (*s && found) {
        found = 0;
        for (int i = 0; accept[i]; i++) {
            if (*s == accept[i]) {
                count++;
                found = 1;
                break;
            }
        }
        if (found) {
            s++;
        }
    }
    return count;
}

