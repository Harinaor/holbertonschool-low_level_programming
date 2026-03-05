#include "main.h"
#include <stdio.h>

/**
 * puts_half - affiche la moitié d'une chaîne,
 * suivi d'une nouvelle ligne
 * @str: une chaîne de caractère
 * Return: affiche la seconde moitié de la chaîne
 */
void puts_half(char *str)
{
/*
 * Si la longueur est pair / 2
 * Si la longueur est impair n = (longueur de la chaine + 1) / 2
 * str -> pointeur vers la première case d'un tableau de caractère
 * str -> contenu de l'adresse pointée par le pointeur (ici premier caractère
 * str[5] -> contenu de la SIXIEME case du tableau souhaité.
 * Je veux parcourir ma chaîne str, cellule par cellule, jusqu'à la cellule
 * qui contient \0.
 */
int length = 0;
int i = 0;
int j = 0;

while (str[length] != '\0')
{
length++;
}
/* La boucle for fait parcourir *str */ 
/* et permet de calculer sa longueur length */
if (length % 2 == 0)
j = length / 2;
else
j = (length + 1) / 2;
/* ici on cherche à partager pairs et impairs */
/* le calcul du milieu de chaine est différent pour les 2 */
/* on connait la longueur de la chaine et son milieu */
/* on cherche maintenant à afficher la seconde partie de la chaine */
/* La boucle for parcours *str depuis j et permet de connaitre son contenu */
for (i = j ; i < length ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
