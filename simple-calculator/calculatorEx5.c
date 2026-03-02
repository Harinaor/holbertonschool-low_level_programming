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
 * @a: premier entier pour les opérations
 * @b: deuxième entier pour les opérations
 * Return: 0
 */

 /*Programme 2 : Boucle de menu de calculatrice*/
int addition(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);

int boucle_menu(void)
{
int tiroir = -1;

while (tiroir != 0)
{
printf("Enter your choice: \n");
(scanf("%d", &tiroir));
if (tiroir == 0)
{
printf("Bye \n");
exit(0);
}
else if (tiroir == 1)
{
addition(0, 0);
}
else if (tiroir == 2)
{
substract(0, 0);
}
else if (tiroir == 3)
{
multiply(0, 0);
}
else if (tiroir < 0 || tiroir >= 5)
printf("Invalid choice %d \n", tiroir);
else
printf("the option selected: %d \n", tiroir);
}
return (0);
}
/**
 * addition - additionner deux entiers entrés par l'utilisateur
 *
 * Return: la somme des deux entiers
 */

 /*Programme 3 : Addition*/
int boucle_menu(void);
void afficher_sum(int sum);

/*caluculer la somme*/
int addition(int a, int b)
{
printf("Enter your first number value \n a = ");
(scanf("%d", &a));
printf("Enter your second number value \n b = ");
(scanf("%d", &b));
afficher_sum(a + b);
return (a + b);
}
/**
 * afficher_sum - afficher la somme
 * @sum: somme des deux entiers
 * Return: affiche la somme des deux entiers
 */

/*Afficher la somme*/
void afficher_sum(int sum)
{
printf("le résultat est %d \n", sum);
}

/**
 * substract - soustraire deux entiers entrés par l'utilisateur
 *
 * Return: la soustraction des deux entiers
 */

 /*Programme 4 : Soustraction*/
int boucle_menu(void);
void afficher_sub(int sub);


/*calculer la soustraction*/
int substract(int a, int b)
{

printf("Enter your first number value \n c = ");
(scanf("%d", &a));
printf("Enter your second number value \n b = ");
(scanf("%d", &b));
afficher_sub(a - b);
return (a - b);
}
/**
 * afficher_sub - afficher la soustraction
 * @sub: soustraction de deux entiers
 * Return: affiche la soustraction des deux entiers
 */

/*Afficher la soustraction*/
void afficher_sub(int sub)
{
{
printf("le résultat est %d \n", sub);
}
}

/**
 * multiply - multiplier deux entiers entrés par l'utilisateur
 *
 * Return: le produit des deux entiers
 */

 /*Programme 5 : Multiplication*/
int boucle_menu(void);
void afficher_mul(int mul);


/*calculer la multiplication*/
int multiply(int a, int b)
{

printf("Enter your first number value \n a = ");
(scanf("%d", &a));
printf("Enter your second number value \n b = ");
(scanf("%d", &b));
afficher_mul(a * b);
return (a * b);
}
/**
 * afficher_mul - afficher la multiplication
 * @mul: multiplication de deux entiers
 * Return: affiche la multiplication des deux entiers
 */

/*Afficher la multiplication*/
void afficher_mul(int mul)
{
{
printf("le résultat est %d \n", mul);
}
}
