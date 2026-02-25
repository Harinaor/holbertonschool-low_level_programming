#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @n: The integer to extract the digit from.
 * Return: la valeur du dernier digit
*/
int print_last_digit(int n)
{
int lastd;
lastd = n % 10;
if (lastd < 0)
{
lastd = -lastd;
}
_putchar(lastd + '0');
return (lastd);
}
