#include "function_pointers.h"

/**
 * print_name - Appelle une fonction pour imprimer un nom
 * @name: Pointeur vers le nom à imprimer
 * @f: Pointeur vers une fonction qui imprime le nom
 *
 * Description: Si name et f ne sont pas NULL, la fonction f est appelée.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL) /* Vérifie que les paramètres sont valides */
	{
		f(name); /* Appelle la fonction pointée par f avec name */
	}
}
