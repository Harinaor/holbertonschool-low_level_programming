#include "main.h"

/**
 * print_line - trace une ligne droite dans le terminal
 * @n: le nombre de fois que le caractère _ doit être affiché
 * Return: une ligne droite affiché dans le terminal
 */
void print_line(int n)
{
int i;
if (n > 0)
for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
