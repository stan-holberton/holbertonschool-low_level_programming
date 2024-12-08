#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Vérifie le code en testant la fonction create_file.
 * @ac: Le nombre d'arguments passés à la fonction.
 * @av: Le tableau contenant les arguments passés à la fonction.
 *
 * Return: Toujours 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
