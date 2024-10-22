#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable n
 * and prints the last digit of n along with specific messages based
 * on the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int last_digit;

    srand(time(0));  /* Initialize random number generator */
    n = rand() - RAND_MAX / 2;  /* Generate a random number */

    last_digit = n % 10;  /* Get the last digit of n */

    if (last_digit > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
    }
    else if (last_digit == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, last_digit);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
    }

    return (0);  /* Return success value */
}
