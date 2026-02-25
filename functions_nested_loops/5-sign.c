#include "main.h"

/**
 * print_sign - Montre le signe d'un nombre
 * @n: Le caractère à vérifier (sous forme de nombre).
 * Return: 1 et print + si positif
 * 0 et print 0 si nul
 * -1 et print - si négatif
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
