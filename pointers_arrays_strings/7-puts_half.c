#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be processed
 *
 * Description: If the length of the string is odd, it prints
 * the last (length_of_the_string - 1) / 2 characters of the string.
 */
void puts_half(char *str)
{
int len = 0, start;

while (str[len] != '\0')
len++;

if (len % 2 == 0)
start = len / 2;
else
start = (len + 1) / 2;

while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}
