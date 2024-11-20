#include "function_pointers.h"

/**
 * int_index - recherche un entier dans un tableau
 * @array: tableau d'entiers
 * @size: taille du tableau
 * @cmp: fonction de comparaison
 *
 * Return: l'index du premier élément pour lequel cmp ne retourne pas 0,
 *         ou -1 si aucun élément ne correspond ou si size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Vérifier si le tableau est valide et la taille est positive */
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	/* Parcourir le tableau et appliquer la fonction de comparaison */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i); /* Retourner l'index du premier match */
	}

	return (-1); /* Retourner -1 si aucun élément ne correspond */
}
