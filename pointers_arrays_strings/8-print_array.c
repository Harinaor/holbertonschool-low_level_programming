#include "main.h"
#include <stdio.h>

/**
 * print_array - Ecrit une fonction qui affiche
 * @n: elements d'un tableau d'entier
 * @a: pointeur vers le début du tableau
 * Return: les éléments du tableau dans l'ordre de stockage
*/
int _putchar(char c);

void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n ; i++)
{
printf("%d", a[i]);
printf(", ");
}
printf("\n");
return;
}
