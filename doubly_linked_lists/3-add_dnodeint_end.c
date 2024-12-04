#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - ajoute 1 nœud à la fin d'une liste double chaînée
 * @head: pointeur vers le premier nœud de la liste
 * @n: valeur à ajouter au nouveau nœud
 *
 * Return: l'adresse du nouveau nœud, ou NULL si l'échec
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}

	return (new);
}
