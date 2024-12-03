#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Ajoute un nouveau nœud à la fin de la liste.
 * @head: Double pointeur vers le premier élément de la liste.
 * @str: Chaîne de caractères à insérer dans le nouveau nœud.
 *
 * Return: L'adresse du nouvel élément, ou NULL si l'ajout a échoué.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	/* Allocation du nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplication de la chaîne */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Initialisation du nouveau nœud */
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* Si la liste est vide, le nouveau nœud devient le premier */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Parcourir la liste pour atteindre le dernier nœud */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Ajouter le nouveau nœud à la fin */
	temp->next = new_node;

	return (new_node);
}
