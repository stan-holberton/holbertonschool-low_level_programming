#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau nœud au début de la liste.
 * @head: Double pointeur vers le premier élément de la liste.
 * @str: Chaîne de caractères à insérer dans le nouveau nœud.
 *
 * Return: L'adresse du nouvel élément, ou NULL si l'ajout a échoué.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Allocation d'un nouveau nœud */
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
