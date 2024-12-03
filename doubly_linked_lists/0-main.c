#include <stdlib.h>
#include "lists.h"

/**
 * main - Point d'entrée pour tester la fonction print_dlistint
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t node1 = {8, NULL, NULL};
	dlistint_t node2 = {42, NULL, NULL};

	head = &node1;
	node1.next = &node2;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (1);
	new->n = 98;
	new->prev = NULL;
	new->next = head;
	head->prev = new;
	head = new;

	print_dlistint(head);

	free(new);
	return (0);
}
