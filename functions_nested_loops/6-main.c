#include "main.h"
#include <stdio.h>

/**
 * main - Vérifie le code pour la fonction _abs
 *
 * Return: Toujours 0
 */

int main(void)
{
int r;

r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
