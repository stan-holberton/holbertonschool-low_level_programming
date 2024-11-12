#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - vérifie le code
 *
 * Return: Toujours 0.
 */
int main(void)
{
	/* Déclare un pointeur vers la chaîne de caractères */
	char *s;

	/* Appelle la fonction _strdup pour dupliquer la chaîne "Duplicated" */
	s = _strdup("Duplicated");

	/* Si l'allocation mémoire échoue, afficher un message d'erreur */
	if (s == NULL)
	{
		/* Affiche un message d'erreur si malloc échoue */
		printf("failed to allocate memory\n");
		/* Retourne 1 pour indiquer une erreur */
		return (1);
	}

	/* Affiche la chaîne dupliquée */
	printf("%s\n", s);

	/* Libère la mémoire allouée pour la chaîne dupliquée */
	free(s);

	/* Retourne 0 pour indiquer que le programme s'est exécuté avec succès */
	return (0);
}
