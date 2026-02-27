#include <stdio.h>

/**
 * row_sum -somme de 2 éléments row et cols
 * @row: numéro de la ligne
 * @cols: nombre de colonnes
 * Return: la somme de tous les éléments de la ligne
 */
int row_sum(int row, int cols)
{
int c;
int sum = 0;

for (c = 1; c <= cols; c++)
sum += row * c;
return (sum);
}
/**
 * total_sum - somme de tous les éléments de toutes les lignes
 * @rows: nombre de lignes
 * @cols: nombre de colonnes
 * Return: la somme de tous les éléments de toutes les lignes
 */
int total_sum(int rows, int cols)
{
int r;
int total = 0;
int current = 0;

for (r = 1; r <= rows; r++)
{
current = row_sum(r, cols);
total += current;
}
return (total);
}
/**
 * main - point d'entrée du programme
 *
 * Return: 0 si le programme s'est terminé avec succès
 */
/* -- DO NOT Modify the code below this line -- */

int main(void)
{
printf("%d\n", total_sum(3, 3));
return (0);
}
