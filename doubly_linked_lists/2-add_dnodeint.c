#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Ajoute un nouveau nœud au début d'une liste dlistint_t
 * @head: Double pointeur vers la tête de la liste
 * @n: Donnée à insérer dans le nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL si l'allocation échoue
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
