#include "3-calc.h"
#include <string.h> /* Pour utiliser strcmp */

/**
 * get_op_func - sélect la fonction appropriée pour l'opération demandée.
 * @s: L'opérateur sous forme de chaîne de caractères.
 *
 * Return: Un pointeur vers la fonction correspondant à l'opérateur,
 *         ou NULL si l'opérateur n'est pas valide.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},  /* Opérateur addition */
		{"-", op_sub},  /* Opérateur soustraction */
		{"*", op_mul},  /* Opérateur multiplication */
		{"/", op_div},  /* Opérateur division */
		{"%", op_mod},  /* Opérateur modulo */
		{NULL, NULL}    /* Fin du tableau */
	};
	int i = 0;

	/* Parcours du tablo p trouver la fonction correspondant à l'opérateur */
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0) /* Vérification stricte de l'opérateur */
		{
			return (ops[i].f); /* Retourne la fonction associée */
		}
		i++;
	}

	return (NULL); /* Retourne NULL si aucun opérateur valide n'est trouvé */
}
