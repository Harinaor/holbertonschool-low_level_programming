#include "main.h"
/**
 * puts2 - fonction qui affiche un caractère sur 2, ça débute à 0
 * et ça termine par un saut de ligne
 * Une chaîne de caractère commence par 0, c'est donc les nombres pairs
 * @str: le pointeur sur les blocs mémoire de chaque caractère
 * Return: affiche les pairs d'une chaine de caractères
 */

void puts2(char *str)
{
int x = 0;

while (str[x] != '\0')
{
_putchar(str[x]);
x++;


if (str[x] == '\0')
break;
else
{
x++;
}
}
_putchar('\n');
}
