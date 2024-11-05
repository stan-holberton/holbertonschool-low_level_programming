#include "main.h"
/**
 * factorial - calcule le factoriel d'un nombre donné
 * @n: le nombre pour lequel le factoriel est calculé
 * Return: le factoriel de n, ou -1 si n est inférieur à 0
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
