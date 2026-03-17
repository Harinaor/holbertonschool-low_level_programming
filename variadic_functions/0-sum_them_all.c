#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - somme de tous les paramètres
 * @n: paramètres constant entier positif
 * Return: 0 si n == 0, sinon la somme de tous les paramètres
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
/*initialisation*/
	va_start(args, n);  
/*parcourir chaque paramètre*/        
	for (i = 0; i < n; i++)
/*récupérer et ajouter*/
		sum += va_arg(args, int); 
/*nettoyage*/
	va_end(args);               

	return (sum);
}
