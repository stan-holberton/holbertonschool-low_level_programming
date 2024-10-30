#include "main.h"

/**
 * _atoi - Convertit une chaîne en entier.
 * @s: Pointeur vers la chaîne de caractères à convertir.
 *
 * Return: L'entier converti de la chaîne, ou 0 si aucune conversion possible.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		}
		else if (started)
			break;
		s++;
	}

	return (sign * result);
}
