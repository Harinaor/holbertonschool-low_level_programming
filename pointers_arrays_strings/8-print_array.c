#include "main.h"
#include <stdio.h>

/**
 * print_array - Ecrit une fonction qui affiche
 * @n: elements d'un tableau d'entier
 * @a: pointeur vers le début du tableau
 * Return: les éléments du tableau dans l'ordre de stockage
*/
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
return;
}
