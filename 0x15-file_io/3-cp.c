#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * copy_file - Copy the content of one file to another.
 * @from_fd: File descriptor of the source file.
 * @to_fd: File descriptor of the destination file.
 */
void copy_file(int from_fd, int to_fd)
{
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(to_fd, buffer, bytes_read) != bytes_read)
		{
			dprintf(2, "Error: Can't write to the destination file\n");
			exit(99);
		}
	}

	if (bytes_read < 0)
	{
		dprintf(2, "Error: Can't read from the source file\n");
		exit(98);
	}
}

int main(int ac, char **av)
{
	int from_fd, to_fd;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		close(from_fd);
		exit(99);
	}

	copy_file(from_fd, to_fd);

	if (close(from_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}

	if (close(to_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}

	return (0);
}

