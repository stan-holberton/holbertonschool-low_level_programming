#include "lists.h"
#include <stdlib.h>  /* Ajout de l'en-tête nécessaire pour free */

/**
 * free_dlistint - libère une liste dlistint_t
 * @head: pointeur vers le début de la liste
 *
 * Retour: Rien.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp); /* Libération de la mémoire allouée */
	}
}
