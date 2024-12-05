#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime un nœud à un index donné
 * dans une liste doubly_linked_list.
 * @head: Pointeur vers le pointeur de la tête de la liste.
 * @index: Index du nœud à supprimer.
 *
 * Return: 1 si le nœud a été supprimé avec succès, -1 sinon.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	else
		*head = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
