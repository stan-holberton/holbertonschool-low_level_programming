#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: The number of arguments
 * @argv: Array containing the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
