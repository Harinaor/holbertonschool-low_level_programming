#include "main.h"
/**
 * print_rev - affiche une phrase mais à l'envers
 * suivi par une nouvelle ligne
 * @s: la mémoire où se déplace le pointeur
 * Return : la phrase s'affiche à l'envers
 */

void print_rev(char *s)
{
/*On prend note de où est la position de début*/
char *debut = s;

/*On reprend la boucle de l'exercice précédent*/
/*mais pas les affichages _putchar*/
while (*s != '\0')
{
s++;
}
s--;
/*On recul d'un pas car imprimer le 0 génère des erreurs*/
/*On créé un second while pour parcourir la phrase à l'envers*/
/*La position de début sauvegardé plus haut*/
/*nous sers à connaître la fin de la phrase à l'envers*/
while (s >= debut)
{
_putchar(*s);
s--;
}
_putchar('\n');
return;
}
