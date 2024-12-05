#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste list_t
 * @head: Pointeur vers un pointeur du premier élément de la liste
 * @str: Chaîne à ajouter à la liste (sera dupliquée)
 *
 * Return: Adresse du nouvel élément ou NULL en cas d'échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dup_str;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	dup_str = strdup(str); /* Duplique la chaîne */
	if (dup_str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL) /* Si la liste est vide */
	{
		*head = new_node;
	}
	else /* Sinon, parcours pour ajouter à la fin */
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
