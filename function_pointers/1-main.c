#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - Affiche un entier
 * @elem: L'entier à afficher
 *
 * Description : Affiche l'entier donné en paramètre
 * suivi d'un saut de ligne.
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * print_elem_hex - Affiche un entier en hexadécimal
 * @elem: L'entier à afficher
 *
 * Description : Affiche l'entier donné en paramètre
 * sous forme hexadécimale suivi d'un saut de ligne.
 */
void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}

/**
 * main - Point d'entrée du programme
 *
 * Description : Teste la fonction array_iterator
 * en utilisant deux fonctions différentes pour afficher
 * les éléments d'un tableau.
 *
 * Return: Toujours 0 (succès).
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	/* Affiche les éléments du tableau en décimal */
	array_iterator(array, 5, &print_elem);

	/* Affiche les éléments du tableau en hexadécimal */
	array_iterator(array, 5, &print_elem_hex);

	return (0);
}
