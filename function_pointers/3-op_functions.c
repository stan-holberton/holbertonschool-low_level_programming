#include "3-calc.h"
#include <stdio.h>  /* Inclusion de <stdio.h> pour utiliser printf */

/**
 * op_add - Additionne deux entiers.
 * @a: Le premier entier.
 * @b: Le second entier.
 *
 * Return: La somme des deux entiers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Soustrait deux entiers.
 * @a: Le premier entier.
 * @b: Le second entier.
 *
 * Return: La différence entre les deux entiers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplie deux entiers.
 * @a: Le premier entier.
 * @b: Le second entier.
 *
 * Return: Le produit des deux entiers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divise deux entiers.
 * @a: Le premier entier.
 * @b: Le second entier.
 *
 * Return: Le quotient de la division de a par b.
 *         Si b est égal à 0, affiche une erreur et quitte le programme.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n"); /* Affichage d'un message d'erreur si division par 0 */
		exit(100);         /* Quitter le programme avec un code d'erreur */
	}
	return (a / b);
}

/**
 * op_mod - Calcule le reste de la division de deux entiers.
 * @a: Le premier entier.
 * @b: Le second entier.
 *
 * Return: Le reste de la division de a par b.
 *         Si b est égal à 0, affiche une erreur et quitte le programme.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n"); /* Affichage d'un message d'erreur si modulo par 0 */
		exit(100);         /* Quitter le programme avec un code d'erreur */
	}
	return (a % b);
}
