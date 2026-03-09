#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_strdup - duplique une chaine de la mémoire en lecture seule
 * vers la mémoire HEAP caractère par caractère
 * @str: l'adresse de la chaine
 * Return: ptr
 */

char *_strdup(char *str)
{
char *ptr = NULL;
int i = 0;
int n = 0;

if (ptr == NULL)
return (NULL);

while (str[n] != '\0')
n++;

n++;

 char *s = malloc(1024);  
if (!s) {
return 1;
}
if (ptr == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
ptr[i] = str[i];
}
ptr[i] = '\0';
return (ptr);
}
