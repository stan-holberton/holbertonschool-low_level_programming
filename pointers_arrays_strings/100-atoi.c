#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * The function will handle optional leading signs and ignore
 * any leading non-numeric characters. If the number exceeds
 * the range of an integer, it will return either INT_MAX or
 * INT_MIN. Returns 0 if no numbers are found in the string.
 *
 * Return: The converted integer or 0 if no numbers found.
 */
int _atoi(char *s)
{
int i = 0, sign = 1;
unsigned int num = 0;

while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign = -sign;
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
if (num > (2147483647 - (s[i] - '0')) / 10)
return (sign == 1 ? 2147483647 : -2147483648);

num = num * 10 + (s[i] - '0');
i++;
}

return (sign * num);
}
