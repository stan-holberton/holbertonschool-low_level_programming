#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUF_SIZE 1024
#define BUF_SIZE 1024

/**
 * error_exit - Handles errors and exits the program.
 * @message: The error message to display.
 * @code: The exit code.
 */
void error_exit(const char *message, int code)
{
	dprintf(STDERR_FILENO, "%s", message);
	exit(code);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments.
 * @argv: The arguments array.
 *
 * Return: 0 on success, or exits with a code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to\n", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file ", 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit("Error: Can't write to file ", 99);

	while ((read_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1)
			error_exit("Error: Can't write to file ", 99);
	}

	if (read_bytes == -1)
		error_exit("Error: Can't read from file ", 98);

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd ", 100);

	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd ", 100);

	return (0);
}
