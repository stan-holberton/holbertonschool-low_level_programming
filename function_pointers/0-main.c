#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - Imprime un nom tel quel
 * @name: Nom de la personne
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name); /* Affiche le nom */
}

/**
 * print_name_uppercase - Imprime un nom en majuscules
 * @name: Nom de la personne
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i]) /* Parcourt chaque caractère */
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a'); /* Convertit en majuscule */
		}
		else
		{
			putchar(name[i]); /* Affiche le caractère tel quel */
		}
		i++;
	}
}

/**
 * main - Vérifie le code
 *
 * Return: Toujours 0
 */
int main(void)
{
	print_name("Bob", print_name_as_is); /* Appelle print_name_as_is */
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0); /* Retourne 0 pour indiquer SUCCESS */
}
