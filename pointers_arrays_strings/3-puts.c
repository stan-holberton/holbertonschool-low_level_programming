#include "main.h"
/**
*_puts - Prints a string followed by a new line to stdout.
*@str: The string to be printed.
*
*Description: This function takes a string as a parameter and prints
*              it character by character to the standard output, followed
*              by a new line.
*/
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
