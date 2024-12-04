#include "lists.h"

/**
 * insert_dnodeint_at_index - Insère un nœud à une position donnée
 * @h: Double pointeur vers le début de la liste
 * @idx: Index où insérer le nœud
 * @n: Données du nouveau nœud
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
	{
		free(new);
		return (NULL);
	}

	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new->next = temp->next;
	new->prev = temp;
	if (temp->next)
		temp->next->prev = new;
	temp->next = new;

	return (new);
}
