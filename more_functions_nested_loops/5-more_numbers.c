#include "main.h"

/**
 * more_numbers - affiche 10 fois les nombres
 * de 0 à 14 suivi d'une nouvelle ligne
 *
 * Return: 0 (success)
 */
void more_numbers(void)
{
int ligne, num;

for (ligne = 0; ligne < 10; ligne++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
