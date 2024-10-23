#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)  /* '0' = 48, '9' = 57 */
		putchar(i);
	for (i = 97; i <= 102; i++)  /* 'a' = 97, 'f' = 102 */
		putchar(i);
	putchar('\n');
	return (0);
}
