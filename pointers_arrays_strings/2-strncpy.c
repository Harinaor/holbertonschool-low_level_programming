#include "main.h"

/**
 * *_strncpy - Ecrire une fonction qui copie des chaines
 * @dest: buffer qui reçoit la chaine
 * @src: chaine de départ
 * @n: entier limiteur qui dit jusqu'où est copié la chaine
 * Return: chaine copiée dans dest et complétée de \0
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}

