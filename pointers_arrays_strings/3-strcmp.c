#include "main.h"

/**
*_strcmp - compares two strings
*@s1: first string
*@s2: second string
*Return: difference between first non-matching characters, 0 if identical
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}
return (s1[i] - s2[i]);
}
