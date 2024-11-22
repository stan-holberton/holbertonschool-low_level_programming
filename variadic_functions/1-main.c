#include "variadic_functions.h"

/**
 * main - Point d'entrée du programme pour tester la fonction print_numbers.
 *
 * Description: Ce programme teste la fonction print_numbers en passant
 * différents ensembles de nombres et un séparateur.
 *
 * Return: Toujours 0 (succès).
 */
int main(void)
{
	/* Test avec un séparateur et plusieurs nombres */
	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}
