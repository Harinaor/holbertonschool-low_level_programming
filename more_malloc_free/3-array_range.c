#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *array_range - créé un tableau (ligne) d'entiers
 * le tableau créé doit contenir toutes les
 * valeurs de min (inclus) à max (inclus)
 * @min: entier minimum inclus dans le tableau
 * @max: entier maximum inclus dans le tableau
 * ordonnées de min à max
 * Return: le pointer du tableau créé
 */
int *array_range(int min, int max)
{
/*STACK*/
int i;
int *ptr;
int size = 0;
/*Quels sont les dimensions*/
/*Quelles sont les conditions aux limites*/
/*Y a t-il des cas non pertinents*/
/*si min ou max accueillent des char ou des float ou double*/
if (min > max)
return (NULL);

/*HEAP*/
size = (max - min + 1);

ptr = malloc(size *sizeof(int));

/* Y-a t-il des boucles?*/

if (ptr == NULL)
return (NULL);

for (i = 0 ; i <= (size - 1) ; i++)
ptr[i] = 0 + i;
return (ptr);
}
