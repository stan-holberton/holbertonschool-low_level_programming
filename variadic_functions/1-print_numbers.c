#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Affiche des nombres, suivis d'une nouvelle ligne.
 * @separator: Chaîne de cara utilisée comme séparateur entre les nombres.
 * @n: Nombre d'entiers passés à la fonction.
 *
 * Description: Cette fonction affiche les nombres passés en arguments,
 * séparés par une chaîne spécifiée. Si le séparateur est NULL, aucun
 * séparateur n'est affiché. Une nouvelle ligne est ajoutée à la fin.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i; /* Variable pour parcourir les arguments */
	va_list args;   /* Liste des arguments variadiques */

	va_start(args, n); /* Initialisation de la liste des arguments */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		/* Affiche le séparateur sauf pour le dernier élément */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args); /* Libère la mémoire utilisée par la liste */
	printf("\n");
}
