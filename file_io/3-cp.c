#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * error_exit - Handles errors and exits the program
 * @msg: The error message
 * @code: Exit code
 */
void error_exit(const char *msg, int code)
{
	write(STDERR_FILENO, msg, strlen(msg)); /* utilise la fct strlen */
	exit(code);
}

/**
 * main - Copies content from one file to another
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, exit code otherwise
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_count;
	char buffer[1024];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to\n", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit("Error: Can't read from file\n", 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		error_exit("Error: Can't write to file\n", 99);
	}

	while ((read_count = read(file_from, buffer, 1024)) > 0)
	{
		if (write(file_to, buffer, read_count) != read_count)
		{
			close(file_from);
			close(file_to);
			error_exit("Error: Can't write to file\n", 99);
		}
	}

	if (read_count == -1)
		error_exit("Error: Can't read from file\n", 98);

	close(file_from);
	close(file_to);

	return (0);
}
