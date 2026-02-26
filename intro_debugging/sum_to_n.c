#include <stdio.h>

/**
 * sum_to_n - Somme des nombres de 1 à 11
 * @n: compteur de sommes
 * Return: n
 */
int sum_to_n(int n)
{
int i;
int sum = 0;

for (i = 1; i < n; i++)
sum += i;
return (n);
}

/**
 * main - somme à n sommes
 *
 * Return: O (succes)
 */
/* -- DO NOT Modify the code below this line -- */

int main(void)
{
printf("%d\n", sum_to_n(11));
return (0);
}
