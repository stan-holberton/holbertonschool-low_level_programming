#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Affiche différents types d'arguments
 * @format: Liste des types d'arguments à afficher
 *
 * Description: Parcourt "format" pour afficher chaque argument selon son type.
 */
void print_all(const char * const format, ...)
{
	va_list args; /* Liste des arguments variadiques */
	unsigned int i = 0; /* Index pour parcourir "format" */
	char *str; /* Pour afficher les chaînes */
	char *separator = ""; /* Séparateur entre les arguments */

	va_start(args, format); /* Démarre la liste des arguments */

	while (format && format[i]) /* Parcourt la chaîne "format" */
	{
		switch (format[i]) /* Vérifie le type d'argument */
		{
		case 'c': /* Affiche un caractère */
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i': /* Affiche un entier */
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f': /* Affiche un flottant */
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's': /* Affiche une chaîne */
			str = va_arg(args, char *);
			if (!str) /* Si NULL, affiche "(nil)" */
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		default: /* Ignore les types non valides */
			i++;
			continue;
		}
		separator = ", "; /* Met à jour le séparateur */
		i++; /* Passe au type suivant */
	}
	printf("\n"); /* Ajoute un saut de ligne final */
	va_end(args); /* Termine la liste des arguments */
}
