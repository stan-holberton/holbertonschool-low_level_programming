#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign a random number to the variable n each time it is executed
 * and print whether the number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0)); /* Initialiser le générateur de nombres aléatoires */
    n = rand() - RAND_MAX / 2; /* Générez un nombre aléatoire */

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return (0);
}
