#include "function_pointers.h"

/**
 * Ecrire une fonction qui execute une autre fonction
 * en tant que paramètre sur chaque élément d'un tableau
 * @array: le tableau à parcourir
 * @size: la taille du tableau
 * @action: un pointeur vers la fonction à utiliser
 * Return: Rien.
 */
*
void array_iterator(int *array, size_t size, void (*action)(int))
{

array_interator est une fonction appelle un tableau d'un certaine taille et lui
applique une action qui est un appel de fonction.

if array == NULL|| size <= 0 || action == NULL
return (void);

for (size = 0 ;)
array[size] = action; 
// A simple subtraction function
int subtract(int a, int b) {
    return a - b;
}

void calc(int a, int b, int (*op)(int, int)) {
    printf("%d\n", op(a, b));
}
}