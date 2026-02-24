#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		/* Si la lettre n'est ni 'e' ni 'q', on l'affiche */
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter); /* Premier appel au code source */
		}
	}
	putchar('\n'); /* Deuxième appel au code source */

	return (0);
}
