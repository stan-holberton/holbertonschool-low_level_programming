#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the square matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += *(a + (size * i + i)); /* Diagonale principale */
sum2 += *(a + (size * i + (size - 1 - i))); /* Diagonale secondaire */
}
printf("%d, %d\n", sum1, sum2); /* Imprime les sommes */
}
