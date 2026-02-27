#include "main.h"

/**
 * print_diagonal - dessine une ligne diagonal dans le terminal
 * @n: nombre de fois où \ doit être imprimé
 * Return: la diagonale représenté
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
