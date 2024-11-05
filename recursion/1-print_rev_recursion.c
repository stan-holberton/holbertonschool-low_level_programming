#include "main.h"

/**
 * _print_rev_recursion - imprime une chaîne de caractères à l'envers
 * @s: la chaîne de caractères à imprimer
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
