#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - Liste chaînée simple
 * @str: Chaîne de caractères (allouée dynamiquement avec malloc)
 * @len: Longueur de la chaîne de caractères
 * @next: Pointeur vers le prochain nœud
 *
 * Description: Structure représentant un nœud d'une liste chaînée simple.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prototype de la fonction */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */
