#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - ajoute une chaine à la suite de l'autre
 * @s1: chaine 1
 * @s2: chaine 2
 * Return: concaténation des deux chaines l'une après l'autre
 */

char *str_concat(char *s1, char *s2)
{
int l1 = 0, l2 = 0, i = 0, j = 0;
char *assemble;

if (!s1)
s1 = "";
if (!s2)
s2 = "";

while (s1[l1])
l1++;
while (s2[l2])
l2++;

assemble = malloc(l1 + l2 + 1);
if (!assemble)
return (NULL);

for (i = 0; i < l1; i++)
assemble[i] = s1[i];
for (j = 0; j < l2; j++)
assemble[i + j] = s2[j];

assemble[i + j] = '\0';
return (assemble);
}
