#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - prints numbers from 1 to 100,
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both.
 */
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
_putchar('F'), _putchar('i'), _putchar('z'), _putchar('z'), _putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
else if (i % 3 == 0)
_putchar('F'), _putchar('i'), _putchar('z'), _putchar('z');
else if (i % 5 == 0)
_putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
else
printf("%d", i);
if (i < 100)
_putchar(' ');
}
_putchar('\n');
}
