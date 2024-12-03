#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Libère une liste_t
 * @head: La tête de la liste à libérer
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
