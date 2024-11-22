#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - Point d'entrée du programme pour tester sum_them_all.
 *
 * Description: Teste la fonction sum_them_all avec différents
 * ensembles de paramètres et affiche les résultats.
 *
 * Return: Toujours 0 (succès).
 */
int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024); /* Test avec deux paramètres */
	printf("%d\n", sum);

	sum = sum_them_all(4, 98, 1024, 402, -1024); /* Test avec 4 paramètres */
	printf("%d\n", sum);

	return (0);
}
