#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * **alloc_grid - retourne un pointer vers un tableau en 2D d'entiers
 * @width: la largeur du tableau
 * @height: la hauteur du tableau
 * @grid: le tableau d'entiers
 * return: *ptr
 */

int **alloc_grid(int width, int height)
{
/*déclarations des variables STACK*/
/*variables locales i, j, width, height*/
/*ex : une grid = 4 ptr de string de 6 de large */
int i;
int j;
int **grid = 0;
int *grid[j] = 0;
/*déclaration des variables HEAP*/

/*si les mémoire à allouer n'existe pas = NULL*/
if (height <= 0 || width <= 0)
return (NULL);
/*mémoire dynamique malloc construit ici*/

/* je dois allouer les lignes en mémoire*/
/*OS = Combien de ligne tu veux . R : Height*/
for (i = 0 ; i != height ; i++)
grid = malloc(height * sizeof(int *));
/* je dois allouer les colonnes en mémoire*/

/* Le CPU alloue les colonnes dans une boucle*/
for (j = 0 ; j != width ; j++)
grid[j] = malloc(width * sizeof(int));
/*chaque éléments de la grille doivent être initialisé à 0*/
grid[j][i] = 0;

/*la fonction doit retourner NULL en cas d'échec*/
/*Si la largeur ou la hauteur vaux 0 ou est négative, retourne NULL*/
if (width <= 0 || height <= 0)
{
return (NULL);
}
else
return (grid);
}
