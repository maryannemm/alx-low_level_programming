#include <stdio.h>

int main(void)
{
    int term1 = 1;  /* First term */
    int term2 = 2;  /* Second term */
    int nextTerm = 0;  /* To store the next term */
    int sum = 2;  /* Sum of even-valued terms, initialized with the second term */

    while (nextTerm <= 4000000)
    {
        nextTerm = term1 + term2;

        /* Check if the next term is even */
        if (nextTerm % 2 == 0)
        {
            sum += nextTerm;
        }

        term1 = term2;
        term2 = nextTerm;
    }

    printf("Sum of even-valued terms: %d\n", sum);

    return 0;
}
