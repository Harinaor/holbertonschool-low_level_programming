#include "main.h"
#include <stdio.h>

/**
 * *_strncat - ecrit une fonction qui concatene partiellement deux chaines
 * @n: nombre de caractère à copier depuis src
 * n est un entier limiteur
 * @dest: buffer de reception de la copie
 * @src: string source
 * Return: concatenation partielle
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
