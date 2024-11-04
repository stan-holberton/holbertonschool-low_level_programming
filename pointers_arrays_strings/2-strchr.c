#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string.
 * @s: the string to search in.
 * @c: the character to locate.
 *
 * Return: a pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return s;
}
s++;
}
return NULL;
}
