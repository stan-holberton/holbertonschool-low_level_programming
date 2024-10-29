#include "main.h"
/**
*print_rev - Prints a string in reverse followed by a new line.
*@s: The string to be printed in reverse.
*
*Description: This function takes a string as a parameter and prints
*              it in reverse order, followed by a new line.
*/
void print_rev(char *s)
{
int len = 0;
while (s[len])
{
len++;
}
while (len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
