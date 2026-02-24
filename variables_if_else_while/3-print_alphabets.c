#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Première boucle pour les minuscules */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* Deuxième boucle pour les majuscules */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	/* Troisième et dernier putchar pour le saut de ligne */
	putchar('\n');

	return (0);
}
