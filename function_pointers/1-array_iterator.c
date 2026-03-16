#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - array_interator est une fonction appelle
 * un tableau d'un certaine taille et lui
 * applique une action qui est un appel de fonction.
 * en tant que paramètre sur chaque élément d'un tableau
 * @array: le tableau à parcourir
 * @size: la taille du tableau
 * @action: un pointeur vers la fonction à utiliser
 * Return: Rien.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t n;

 /*J'enlève les cas où le tableau ne peux pas fonctionner*/
if (array == NULL || size == 0 || action == NULL)
return;

/*je parcours le tableau et applique le */
/*pointeur action à chaque case du tableau*/
for (n = 0; n < size; n++)
action(array[n]);
/*mon pointeur de fonction doit trouver écho avec ce qui le déclenche*/
/*dans 1-main.c les printf sont déjà là donc je n'en ai pas besoin*/
}
