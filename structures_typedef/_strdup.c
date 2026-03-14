#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_strdup - duplique une chaine de la mémoire en lecture seule
 * vers la mémoire HEAP caractère par caractère
 * @str: la chaine à dupliquer
 * et contenant une copie de la chaine de caractère passée en paramètre
 * Return: ptr le poiteur de la copie allouée sur le HEAP
 */

char *_strdup(char *str)
{
char *dup = NULL;
int i = 0;
int n = 0;

if (str == NULL)
{
return (NULL);
}

while (str[n] != '\0')
n++;

n++;
/* la mémoire nécessaire est alloué avec malloc par l'OS*/
dup = malloc(n *sizeof(char));
if (!dup)
return (NULL);
if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
dup[i] = str[i];
}
dup[i] = '\0';
return (dup);
}
