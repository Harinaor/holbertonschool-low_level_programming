#include "main.h"

/**
 * _isalpha - Vérifit que c'est une lettre
 * @c: le caractere a verifier (sous forme d'entier ASCII)
 *
 * Return: 1 si c'est une lettre 0 sinon
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
