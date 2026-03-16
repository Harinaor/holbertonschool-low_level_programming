#include "function_pointers.h"

/**
 * int_index - une fonction qui recherche un entier
 * @array: un tableau d'entier
 * @size: la taille du tableau array
 * @cmp: un pointeur d'une fonction qui compare les entiers
 * Return: un entier
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int n;
int index;

if (cmp == NULL || size <= 0)
return (-1);

for (n = 1; n < size; n++)
index = cmp(array[n]);
return(index);
}
