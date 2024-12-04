#include "lists.h"

/**
 * dlistint_len - Compte le nombre d'éléments dans une liste dlistint_t
 * @h: Pointeur vers la tête de la liste
 *
 * Return: Nombre d'éléments dans la liste
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
