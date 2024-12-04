#include "lists.h"

/**
 * sum_dlistint - calcule la + de tous les élénts. d'1 liste double chaînée
 * @head: pointeur vers le début de la liste
 *
 * Return: la somme des éléments de la liste, ou 0 si la liste est vide
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
