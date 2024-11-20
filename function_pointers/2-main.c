#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - vérifie si un nombre est égal à 98
 * @elem: l'entier à vérifier
 *
 * Return: 0 si faux, autre chose sinon.
 */
int is_98(int elem)
{
	return (elem == 98);
}

/**
 * is_strictly_positive - vérifie si un nombre est supérieur à 0
 * @elem: l'entier à vérifier
 *
 * Return: 0 si faux, autre chose sinon.
 */
int is_strictly_positive(int elem)
{
	return (elem > 0);
}

/**
 * abs_is_98 - vérifie si la valeur absolue d'un nombre est 98
 * @elem: l'entier à vérifier
 *
 * Return: 0 si faux, autre chose sinon.
 */
int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

/**
 * main - vérifie le code
 *
 * Return: Toujours 0.
 */
int main(void)
{
	int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5,
			 6, 7, 8, 9, 10, 11, 98};
	int index;

	index = int_index(array, 20, is_98);
	printf("%d\n", index);
	index = int_index(array, 20, abs_is_98);
	printf("%d\n", index);
	index = int_index(array, 20, is_strictly_positive);
	printf("%d\n", index);

	return (0);
}
