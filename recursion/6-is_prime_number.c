#include "main.h"

/**
 * is_prime_helper - vérifie si un nombre est premier par récursivité
 * @n: le nombre à vérifier
 * @i: l'itérateur pour diviser le nombre
 *
 * Return: 1 si n est un nombre premier, 0 sinon
 */
int is_prime_helper(int n, int i)
{
if (n <= 1)
return (0);
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: le nombre à vérifier
 *
 * Return: 1 si n est un nombre premier, 0 sinon
 */
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
