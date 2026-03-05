#include "main.h"

/**
 * _puts - Ecrit une fonction qui affiche une chaîne de caractères,
 * suivi par \n vers stdout la sortie standard.
 * Concrètement la fonction permet d'afficher
 * une phrase et de passer à la ligne.
 * @c: un caractère
 * Return: chaîne affichée
 */
int _putchar(char c);

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
return;
}
