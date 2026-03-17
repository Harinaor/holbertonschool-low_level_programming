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

	if (cmp == NULL || size <= 0 || array == NULL)
	return (-1);

	for (n = 0; n < size - 1; n++)
	if (cmp(array[n]) != 0)
	return (n);
return (-1);
}
