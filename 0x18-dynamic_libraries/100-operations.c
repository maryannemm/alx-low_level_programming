#include <stdio.h>

/**
 * add - adds two integers
 */
int add(int a, int b) {
    return a + b;
}

/**
 * sub - subtracts two integers
 */
int sub(int a, int b) {
    return a - b;
}

/**
 * mul - multiplies two integers
 */
int mul(int a, int b) {
    return a * b;
}

/**
 * div - divides two integers
 */
int div(int a, int b) {
    if (b == 0) {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return a / b;
}

/**
 * mod - computes the remainder of the division of two integers
 */
int mod(int a, int b) {
    if (b == 0) {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return a % b;
}
