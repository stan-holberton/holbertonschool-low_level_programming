#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Vérifie le code
*
* Return: Toujours 0.
*/
int main(void)
{
	char *s;

	s = str_concat("Best ", "School");
	if (s == NULL)
	{
	printf("failed\n");
	return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
