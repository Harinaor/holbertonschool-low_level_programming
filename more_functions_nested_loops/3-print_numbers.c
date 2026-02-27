#include "main.h"

/**
 * print_numbers - ecrire une fonction qui affiche les nombres de 0 a 9
 * suivis d'un saut de ligne.
 *
 * Return: void
 */
void print_numbers(void)
{    int i;

for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
