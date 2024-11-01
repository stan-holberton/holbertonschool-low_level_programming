#include "main.h"

/**
* _strncat - Concatène deux chaînes en utilisant au plus n octets de src.
* @dest: La chaîne de destination.
* @src: La chaîne source.
* @n: Nombre maximum de caractères de src à utiliser.
*
* Return: Un pointeur vers la chaîne résultante dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
i++;

while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
