#include "lists.h"
#include <stdio.h>

/**
 * print_list - imprime tous les éléments d'une liste_t
 * @h: pointeur vers le premier élément de la liste
 *
 * Return: le nombre de nœuds
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		node_count++;
	}

	return (node_count);
}
