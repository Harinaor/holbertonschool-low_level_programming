#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - retourne un pointer vers un tableau 2D d'entiers
 * @width: largeur du tableau
 * @height: hauteur du tableau
 * Return: pointeur vers le tableau ou NULL si échec
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

/* Allocation du tableau de pointeurs */
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

/* Allocation de chaque ligne et initialisation à 0 */
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == (NULL))
{
/* En cas d'échec, libérer ce qui a été alloué */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

/* Initialiser la ligne à 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
