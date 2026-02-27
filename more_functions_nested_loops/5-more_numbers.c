#include "main.h"
/**
 * more_numbers - affiche 10 fois les nombres
 * de 0 à 14 suivi d'une nouvelle ligne
 *
 * Return: 0 (success)
 */
void more_numbers(void)
{
int x;
int y;

for (x = 0 ; x <= 10; x++)
{
for (y = 0 ; y <= 14; y++)
{
_putchar (y);
}
_putchar ('\n');
}
}
