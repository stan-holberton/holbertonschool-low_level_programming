#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 * Return: the converted integer
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
}
else if (num > 0)
break;
s++;
}

if (sign < 0)
num = -num;

if (num > 2147483647 && sign > 0)
return (-1);
if (num > 2147483648 && sign < 0)
return (0);
return (num * sign);
}
