#include "main.h"

/**
 * _abs - Calcul la valeur absolue d'un nombre
 * @n: L'entier à vérifier
 * Return: r la valeur absolue
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
