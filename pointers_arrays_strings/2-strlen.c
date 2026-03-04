#include "main.h"

/**
 * _strlen - Ecrire une fonction qui renvoi la longueur
 * d'une chaîne de caractères
 * @s: J'ai modélisé ça par mario (pointeur) *s qui marche
 * sur des blocs au dessus de la lave
 * quand mario tombe sur le bloc vide,
 * c'est équivalent à la longueur des blocs parcouru
 * donc la longueur de la chaîne
 * exclu le dernier byte null ('\0')
 * Return: 0
 */

int _strlen(char *s)
{
int longueur = 0;
while (*s != '\0')
{
longueur++;
s++;
}
return (longueur);
}
