#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 < 100; num1++)
    {
        for (num2 = num1; num2 < 100; num2++)
        {
            int tens1 = num1 / 10;
            int units1 = num1 % 10;
            int tens2 = num2 / 10;
            int units2 = num2 % 10;

            if (num1 != num2)
            {
                putchar(tens1 + '0');
                putchar(units1 + '0');
                putchar(' ');
                putchar(tens2 + '0');
                putchar(units2 + '0');

                if (num1 != 98 || num2 != 99)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return (0);
}
