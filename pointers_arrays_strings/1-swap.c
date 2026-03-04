/**
 * ecrire une fonction qui échange la valeur de 2 entiers
 * @a: entier n°1
 * @b: entier n°2
 * Return: les entiers échangés
 */

void swap_int(int *a, int *b)
{
int stock;
stock = *a;
*a = *b;
*b = stock;

return;
}
