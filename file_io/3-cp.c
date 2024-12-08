#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUF_SIZE 1024

/**
 * error_exit - Handles errors and exits the program.
 * @message: The error message to display.
 * @code: The exit code.
 */
void error_exit(char *message, int code)
{
	dprintf(STDERR_FILENO, "%s", message);
	exit(code);
}

/**
 * copy_file - Copies the content of one file to another.
 * @from_fd: File descriptor of the source file.
 * @to_fd: File descriptor of the destination file.
 *
 * Return: 0 on success, or exits with a code on failure.
 */
void copy_file(int from_fd, int to_fd)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	while ((bytes_read = read(from_fd, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit("Error: Can't write to ", 99);
	}

	if (bytes_read == -1)
		error_exit("Error: Can't read from file ", 98);
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
	int from_fd, to_fd;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to\n", 97);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		error_exit("Error: Can't read from file ", 98);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
		error_exit("Error: Can't write to ", 99);

	copy_file(from_fd, to_fd);

	if (close(from_fd) == -1)
		error_exit("Error: Can't close fd ", 100);

	if (close(to_fd) == -1)
		error_exit("Error: Can't close fd ", 100);

	return (0);
}
