#include "main.h"
#include <stdlib>

/**
 * *malloc_checked - Ecrire une fonction qui alloue de la mémoire avec malloc
 * @b: un entier positif
 * Return: mem un pointer vers la mémoire allouée en hexadécimal
 */

void *malloc_checked(unsigned int b)
{
/*STACK*/
void *mem;
/*HEAP*/
mem = malloc(b);

/*si malloc échoue, malloc_checked doit causer*/ 
/*une fin de process avec une valeur status de 98*/
if (mem == NULL)
exit(98);

return(mem);
}
