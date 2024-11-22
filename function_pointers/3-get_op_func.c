#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  /* Pour utiliser strlen */

/**
 * get_op_func - Sélectionne la fonction appropriée pour
 *               l'opération demandée.
 * @s: L'opérateur sous forme de chaîne de caractères.
 *
 * Return: Un pointeur vers la fonction correspondant à l'opérateur,
 *         ou NULL si l'opérateur n'est pas valide.
 */
int (*get_op_func(char *s))(int, int)
{
	/* Vérification que l'opérateur est un seul caractère */
	if (strlen(s) != 1)
	{
		return (NULL);  /* Si l'opérateur est plus d'un caractère, retourne NULL */
	}

	/* Tableau d'opérateurs et de fonctions correspondantes */
	op_t ops[] = {
		{"+", op_add},  /* Opérateur addition */
		{"-", op_sub},  /* Opérateur soustraction */
		{"*", op_mul},  /* Opérateur multiplication */
		{"/", op_div},  /* Opérateur division */
		{"%", op_mod},  /* Opérateur modulo */
		{NULL, NULL}    /* Fin du tableau */
	};
	int i = 0;

	/* Parcours tableau pour trouver fonction correspondant à l'opérateur */
	while (ops[i].op != NULL)
	{
		/* Si l'opérateur correspond à celui fourni par l'utilisateur */
		if (*(ops[i].op) == *s)
		{
			/* Retourne la fonction correspondante */
			return (ops[i].f);
		}
		i++; /* Passe à l'opérateur suivant dans le tableau */
	}

	/* Si aucun opérateur n'a été trouvé, retourne NULL */
	return (NULL);
}

