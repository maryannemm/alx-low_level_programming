#include <stdio.h>
#include <string.h>

/**
 * generate_key - Generates a simple example key based on the username.
 * @username: The input username.
 * @key: The generated key.
 */
void generate_key(char *username, char *key) {
    /* Simple example logic (not the actual logic of crackme5) */
    sprintf(key, "%s-%lu", username, strlen(username) * 42);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[]) {
    char key[256];

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <username>\n", argv[0]);
        return 1;
    }

    generate_key(argv[1], key);

    printf("%s\n", key);

    return 0;
}

