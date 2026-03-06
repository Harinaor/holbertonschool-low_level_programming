#include "main.h"

/**
 * *_strcat - Ecrit une fonction qui place une chaine à la suite d'une autre
 * @dest: buffer
 * @src: chaine source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
