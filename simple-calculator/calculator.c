#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - afficher un menu avec une ligne de bienvenue
 * pour selectionner les opérations
 * permettre de quitter avec l'option 0
  * Return: 0
 */
int main(void)
{
int tiroir;

printf("Welcome to my calculator \n");
printf("\n");
printf("Simple Calculator \n");
printf("1')' Add \n");
printf("2')' Substract \n");
printf("3')' Multiply \n");
printf("4')' Divide \n");
printf("0')' Quit \n");
printf("Enter your choice: \n");
(scanf("%d", &tiroir));
if (tiroir == 0)
{
printf("Bye \n");
exit(0);
}
else
{
printf("the option selected: %d \n", tiroir);
return (0);
}
}
