#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - adds positive numbers
*@argc: argument count
*@argv: argument vector
*
*Return: Always 0 (Success), 1 if error
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
int j = 0;

while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
