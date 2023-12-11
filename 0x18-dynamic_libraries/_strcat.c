#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src) {
    char *ptr = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (ptr);
}

