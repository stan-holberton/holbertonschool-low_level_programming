#include "main.h"

/**
 * main - Entry point for testing the `cp` program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to\n", 97);
	}

	/* Call your function here with argv[1] and argv[2] */
	return (0);
}
