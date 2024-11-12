#include <stdlib.h> /* malloc, free */

/**
 * _strdup - duplique une chaîne de caractères
 * @str: la chaîne à dupliquer
 *
 * Return: un pointeur vers la chaîne dupliquée, ou NULL si la mémoire est
 *         insuffisante ou si str est NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	if (str == NULL) /* vérifier si la chaîne d'entrée est NULL */
		return (NULL);

	/* calculer la longueur de la chaîne */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* allouer de la mémoire pour la chaîne dupliquée */
	dup_str = (char *)malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL) /* vérifier si malloc a échoué */
		return (NULL);

	/* copier la chaîne dans la mémoire allouée */
	for (i = 0; i < len; i++)
		dup_str[i] = str[i];

	dup_str[len] = '\0'; /* ajouter le caractère nul à la fin de la chaîne */

	return (dup_str);
}
