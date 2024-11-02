#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @str: the string to modify
* Return: the modified string
*/
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;
char separators[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{
int j = 0;
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= ('a' - 'A');
}
capitalize_next = 0;
while (separators[j] != '\0')
{
if (str[i] == separators[j])
{
capitalize_next = 1;
break;
}
j++;
}
i++;
}
return (str);
}
