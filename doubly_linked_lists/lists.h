#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct dlistint_s - Liste doublement chaînée
 * @n: entier
 * @prev: pointeur vers le nœud précédent
 * @next: pointeur vers le nœud suivant
 *
 * Description: Structure pour un nœud de liste doublement chaînée
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Prototype de la fonction */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
