#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name of the person
 * @f: function pointer to the function that prints the name
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
/*vérifier ce qui retourne NULL*/
if (name == NULL || f == NULL)
	return;
/*le pointeur f est déjà déclaré*/
/*l'assigner à print_name*/
f(name);
}
