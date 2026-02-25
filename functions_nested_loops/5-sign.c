#include "main.h"

/**
 * print_sign - Montre le signe d'un nombre
 * @n: Le caractère à vérifier (sous forme de nombre).
 *
 * Return: 1 si positif 0 si nul -1 si négatif
 */
int print_sign(int n)
{
	if (n > '0')
	{
		return (1);
	}
	else if (n < '0')
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
