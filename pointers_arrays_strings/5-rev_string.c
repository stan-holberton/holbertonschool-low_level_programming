#include "main.h"
/**
*rev_string - Reverses a string.
*@s: The string to be reversed.
*
*Description: This function takes a string as a parameter and reverses
*              the order of the characters in the string.
*/
void rev_string(char *s)
{
int len = 0, i;
char temp;
while (s[len])
{
len++;
}
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
