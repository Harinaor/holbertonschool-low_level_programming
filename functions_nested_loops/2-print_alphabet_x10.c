#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
/* je déclare mes variables x et y */
int x;
int y;
/* J'affiche 10x22x1lettre */
/* Je dois afficher ma bouche for alphabet 10 fois */
/* il me faut une seconde boucle */
	for (y = 1; y <= 10; y++)
	{
/* pour afficher les 22 lettres il me faut une boucle for */
		for (x = 'a'; x <= 'z'; x++)
			{
			_putchar(x);
			_putchar('\n');
			}
	}
/* Troisième et dernier putchar pour le saut de ligne */

}
