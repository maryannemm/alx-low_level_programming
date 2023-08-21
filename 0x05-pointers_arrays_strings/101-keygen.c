#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum = 0;
    char password[100];
    int i = 0;

    srand(time(0));

    while (sum < 2772 - 122) 
    {
        password[i] = rand() % 94 + 33;
        sum += password[i];
        i++;
    }

    password[i] = 2772 - sum;
    password[i + 1] = '\0';

    printf("%s", password);

    return (0);
}
