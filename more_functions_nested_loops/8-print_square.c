#include "main.h"
/**
 * print_square - imprime un carré
 * @size: la taille du carré
 * Return: un carré de la taille spécifiée
 */
void print_square(int size)
{
int column;
int line;

if (size <= 0)
_putchar('\n');
else
for (column = 0 ; column < size ; column++)
{
for (line = 0 ; line < size ; line++)
{
_putchar('#');
}
_putchar('\n');
}
}
