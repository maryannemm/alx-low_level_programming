#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define ELF_MAGIC_SIZE 16

/**
 * error_exit - Print an error message to stderr and exit with status 98.
 * @msg: The error message to print.
 */
void error_exit(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * read_elf_header - Read and print the ELF header of an ELF file.
 * @filename: The name of the ELF file.
 */
void read_elf_header(const char *filename)
{
	int fd, i;
	unsigned char elf_magic[ELF_MAGIC_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		error_exit("Error: Can't open file");

	if (read(fd, elf_magic, ELF_MAGIC_SIZE) != ELF_MAGIC_SIZE)
		error_exit("Error: Can't read from file");

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < ELF_MAGIC_SIZE; i++)
	{
		if (i == ELF_MAGIC_SIZE - 1)
			printf("%02x\n", elf_magic[i]);
		else
			printf("%02x ", elf_magic[i]);
	}
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	read_elf_header(argv[1]);

	return (0);
}

