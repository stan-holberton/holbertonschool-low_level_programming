#include "main.h"
#include <stdio.h>

/**
* main - Programme de test pour la fonction _atoi
*
* Return: Toujours 0 (Succès)
*/
int main(void)
{
int nb;

nb = _atoi("98");
printf("%d\n", nb);
nb = _atoi("-402");
printf("%d\n", nb);
nb = _atoi("          -98");
printf("%d\n", nb);
nb = _atoi("214748364");
printf("%d\n", nb);
nb = _atoi("0");
printf("%d\n", nb);
nb = _atoi("402");
printf("%d\n", nb);
nb = _atoi("98");
printf("%d\n", nb);
nb = _atoi("-402");
printf("%d\n", nb);
return (0);
}
