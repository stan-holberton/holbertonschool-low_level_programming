#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programme principal qui effectue une opération simple entre deux
 *        entiers.
 * @argc: Le nombre d'arguments passés au programme.
 * @argv: Le tableau des arguments passés au programme.
 *
 * Return: 0 en cas de succès, ou un code d'erreur spécifique en cas de
 *         problème.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	/* Vérification du nombre d'arguments */
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	/* Conversion des arguments en entiers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Sélection de la fonction correspondant à l'opérateur */
	operation = get_op_func(argv[2]);

	/* Vérification si l'opérateur est valide */
	if (operation == NULL)
	{
		puts("Error");
		exit(99);
	}

	/* Vérification des erreurs de division ou de modulo par 0 */
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		puts("Error");
		exit(100);
	}

	/* Exécution de l'opération et affichage du résultat */
	printf("%d\n", operation(num1, num2));

	return (0);
}
