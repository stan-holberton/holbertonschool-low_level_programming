#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Affiche des chaînes de caractères suivies d'une
 * nouvelle ligne.
 * @separator: Chaîne utilisée comme séparateur entre les chaînes.
 * @n: Nombre de chaînes passées en arguments.
 *
 * Description: Si une chaîne est NULL, "(nil)" est affiché. Si le
 * séparateur est NULL, aucun séparateur n'est affiché. Une nouvelle
 * ligne est ajoutée à la fin.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i; /* Itérateur pour parcourir les arguments */
	va_list args;   /* Liste des arguments variadiques */
	char *str;      /* Pointeur pour chaque chaîne de caractères */

	va_start(args, n); /* Initialisation de la liste des arguments */

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *); /* Récupère l'argument suivant */
		if (str == NULL)
			printf("(nil)"); /* Affiche (nil) si la chaîne est NULL */
		else
			printf("%s", str); /* Affiche la chaîne si elle est valide */

		/* Ajoute le séparateur entre les chaînes, sauf après la dernière */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args); /* Libère la mémoire utilisée par la liste */
	printf("\n"); /* Ajoute une nouvelle ligne après l'affichage */
}
