#include "main.h"

/**
 * sqrt_helper - Calcule la racine carrée naturelle de n en utilisant i
 * @n: Le nombre pour lequel on cherche la racine carrée
 * @i: Le nombre à tester pour voir s'il est la racine carrée de n
 *
 * Return: La racine carrée naturelle de n, ou -1 si elle n'existe pas
 */
int sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Renvoie la racine carrée naturelle de n
 * @n: Le nombre pour lequel on cherche la racine carrée
 *
 * Return: La racine carrée naturelle de n, ou -1 si elle n'existe pas
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_helper(n, 0));
}
