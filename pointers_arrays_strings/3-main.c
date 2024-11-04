#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s1 = "Lorem ipsum dolor sit amet";
char *s2 = "Lorp";
unsigned int n;

n = _strspn(s1, s2);
printf("Length of prefix substring: %u\n", n);

n = _strspn("", s2);
printf("Length of prefix substring for empty string: %u\n", n);

return (0);
}
