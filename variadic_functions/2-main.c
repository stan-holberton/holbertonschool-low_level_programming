#include "variadic_functions.h"

/**
 * main - Teste la fonction print_strings.
 *
 * Return: Toujours 0.
 */
int main(void)
{
	/* Test avec deux chaînes de caractères */
	print_strings(", ", 2, "Jay", "Django");

	/* Test avec deux chaînes, l'une étant NULL */
	print_strings(", ", 3, "Jay", NULL, "Django");

	/* Test avec une chaîne vide et un séparateur NULL */
	print_strings(NULL, 2, "", "Django");

	return (0); /* Retourne 0 pour indiquer un succès */
}
