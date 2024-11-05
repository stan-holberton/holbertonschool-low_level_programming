#include "main.h"

/**
 * _puts_recursion - imprime une chaîne de caractères suivie d'une nouvelle
 * ligne
 * @s: la chaîne de caractères à imprimer
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
