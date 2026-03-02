#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *  * main - afficher un menu avec une ligne de bienvenue
 * pour selectionner les opérations
 * permettre de quitter avec l'option 0
  * Return: 0
 */

/*Programme 1 : Menu de calculatrice*/
int boucle_menu(void);

int main(void)
{
printf("Welcome to my calculator \n");
printf("\n");
printf("Simple Calculator \n");
printf("1')' Add \n");
printf("2')' Substract \n");
printf("3')' Multiply \n");
printf("4')' Divide \n");
printf("0')' Quit \n");
boucle_menu();
return (0);
}
/**
 * boucle_menu - répéter le menu jusqu'à la commande 0 pour exit
 * Les données @tiroir: sert à repérer les entrées invalides
 * un compteur @i: sert à itérer les boucles du menu
 * Return: 0
 */

 /*Programme 2 : Boucle de menu de calculatrice*/
int boucle_menu(void)
{
int tiroir;

while (tiroir != 0)
{
printf("Enter your choice: \n");
(scanf("%d", &tiroir));
if (tiroir == 0)
{
printf("Bye \n");
exit(0);
}
else if (tiroir < 0 || tiroir >= 5)
printf("Invalid choice %d \n", tiroir);
else
printf("the option selected: %d \n", tiroir);
}
return (0);
}
