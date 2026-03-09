#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - crée une chaîne remplie d'un caractère
 * @size: la taille de la chaîne
 * @c: le caractère
 * Return: pointeur vers la chaîne créée, ou NULL si échec
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

if (size == 0)
return (NULL);

ptr = malloc(size);
if (ptr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
ptr[i] = c;
}

return (ptr);
}
