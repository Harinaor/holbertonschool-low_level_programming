#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description: Imprime l'alphabet en minuscules suivi d'un saut de ligne
 * en utilisant seulement deux appels à putchar.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter); /* Premier appel : dans la boucle pour l'alphabet */
	}
	putchar('\n'); /* Deuxième appel : pour la nouvelle ligne */

	return (0);
}
