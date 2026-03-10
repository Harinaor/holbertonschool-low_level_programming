#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatène deux chaînes
 * @s1: chaine 1
 * @s2: chaine 2
 * @n: nombre de caractère de la chaine 2 à concatener
 * Return: pointer vers la nouvelle mémoire allouée
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
/*STACK*/
unsigned int i = 0;
unsigned int j = 0;
unsigned int k = 0;
char *ptr;
/*HEAP*/
/*contient s1, suivi des premiers n bytes de s2 et NULL terminé*/
while (s1[i] != '\0')
i++;

while (s2[j] != '\0')
j++;

if (n == j || n > j)
n = j;

ptr = malloc(i + n + 1);

if (ptr == NULL)
return (NULL);

/* Copier s1 */
for (k = 0; k < i; k++)
    ptr[k] = s1[k];

/* Copier les premiers n caractères de s2 */
for (k = 0; k < n; k++)
    ptr[i + k] = s2[k];

/* Terminer par '\0' */
ptr[i + n] = '\0';

return (ptr);
}
