#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - retourne le nième nœud d'1 liste chaînée.
 * @head: pointeur vers le début de la liste.
 * @index: index du nœud à récupérer, en commençant de 0.
 *
 * Return: pointeur vers le nœud à l'index donné, ou NULL s'il n'existe pas.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}
