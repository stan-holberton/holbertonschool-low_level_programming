#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an array of 8 strings
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if (a[i][j] == ' ')
putchar('.');
else
putchar(a[i][j]);
}
putchar('\n');
}
}
