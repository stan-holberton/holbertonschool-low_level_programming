#include "variadic_functions.h"

/**
 * sum_them_all - Calcule la somme de tous ses paramètres.
 * @n: Nombre de paramètres.
 *
 * Description: Si n est égal à 0, retourne 0. Sinon, parcourt
 * tous les paramètres et calcule leur somme.
 *
 * Return: La somme de tous les paramètres ou 0 si n est 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i; /* Indice pour parcourir les paramètres */
	int sum = 0;    /* Variable pour stocker la somme */
	va_list args;   /* Liste des arguments variables */

	if (n == 0)
		return (0); /* Retourne 0 si aucun paramètre n'est fourni */

	va_start(args, n); /* Initialise la liste des arguments */
	for (i = 0; i < n; i++)
		sum += va_arg(args, int); /* Ajoute chaque paramètre à la somme */
	va_end(args); /* Termine l'utilisation de la liste */

	return (sum); /* Retourne la somme totale */
}
