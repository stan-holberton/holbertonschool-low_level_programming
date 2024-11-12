#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - Affiche un buffer en hexadécimal
 * @buffer: L'adresse de la mémoire à imprimer
 * @size: La taille de la mémoire à imprimer
 *
 * Return: Rien.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}

/**
 * main - Teste la fonction create_array
 *
 * Return: Toujours 0.
 */
int main(void)
{
char *buffer;

buffer = create_array(98, 'H');
if (buffer == NULL)
{
printf("Échec de l'allocation mémoire\n");
return (1);
}
simple_print_buffer(buffer, 98);
free(buffer);
return (0);
}
