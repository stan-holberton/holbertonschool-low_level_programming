#include "variadic_functions.h"

/**
 * print_all - Affiche divers types d'arguments.
 * @format: Liste des types d'arguments.
 *
 * Description : Cette fonction parcourt la chaîne format.
 * Elle affiche les arguments selon leurs types (c, i, f, s).
 * Une chaîne NULL est remplacée par "(nil)".
 */
void print_all(const char * const format, ...)
{
	va_list args; /* Liste des arguments */
	char *str, *separator; /* Chaîne de séparation entre les valeurs */
	unsigned int i; /* Compteur pour parcourir la chaîne format */

	va_start(args, format); /* Initialisation de la liste */
	separator = ""; /* Initialisation de la chaîne de séparation */
	i = 0;

	while (format && format[i]) /* Vérifie si format est non NULL */
	{
		switch (format[i]) /* Sélectionne l'action selon le type */
		{
		case 'c': /* Type caractère */
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i': /* Type entier */
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f': /* Type flottant */
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's': /* Type chaîne */
			str = va_arg(args, char *);
			if (!str) /* Vérifie si la chaîne est NULL */
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		}
		separator = ", "; /* Ajoute la séparation pour la suite */
		i++;
	}
	printf("\n"); /* Ajoute un saut de ligne à la fin */
	va_end(args); /* Libère la mémoire utilisée par va_list */
}
