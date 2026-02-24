#include <stdio.h>

/**
 * main - Prints all the numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	int letter;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (letter = 'A'; letter <= 'F'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
