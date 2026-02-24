#include <stdio.h>

/**
 * main - print number from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}
