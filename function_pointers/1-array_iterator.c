#include "function_pointers.h"

/**
 * array_iterator - Applique une fonction sur chaque élément d'un tableau
 * @array: Pointeur vers le tableau d'entiers
 * @size: Taille du tableau
 * @action: Pointeur vers la fonction à appliquer
 *
 * Description : La fonction vérifie si les pointeurs sont valides avant de
 * parcourir le tableau. Si `array` ou `action` est NULL, elle quitte sans
 * effectuer d'opérations.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Initialisation de l'index */
	size_t i;

	/* Vérifie si le tableau ou la fonction est NULL */
	if (!array || !action)
		return;

	/* Parcours du tableau et application de la fonction */
	for (i = 0; i < size; i++)
		action(array[i]);
}
