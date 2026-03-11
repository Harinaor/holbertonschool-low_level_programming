#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *_calloc - une fonction qui alloue de la mémoire
 * dans un tableau (ligne) en utilisant malloc
 * la fonction _calloc alloue de la memoirer pour un tableau
 * de nmemb éléments de taille de bytes chacun
 * et return un poiteur vers l'allocation mémoire
 * @nmemb: un entier positif, nombre d'éléments du tableau
 * @size: un entier positif, taille de des bytes de la mémoire
 * Return: un pointeur vers l'allocation mémoire
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
/*STACK*/
unsigned int i = 0;
char *ptr;
unsigned int total;

/*HEAP*/
if (nmemb == 0 || size == 0)
return (NULL);

if (size != 0 && (nmemb * size) / size != nmemb)
return (NULL);

total = nmemb * size;

ptr = malloc(total);

if (ptr == NULL)
return (NULL);
/*La mémoire est configurée à 0*/

for (i = 0 ; i < total ; i++)
ptr[i] =  0;

return (ptr);
}
