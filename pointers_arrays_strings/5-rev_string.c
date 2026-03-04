#include "main.h"

/**
 * rev_string - une fonction qui remplace la
 * mémoire de manière à inverser définitivement
 * la phrase stockées dedans
 * @s: la chaine à transformer
 * Return:la phrase à l'envers
 */
void rev_string(char *s)
{
char stock;
int a = 0;
int b = 0;

while (s[b] != '\0')
{
b++;
}
/* il ne faut pas oublier de décaler de -1 après la 1ière boucle */
/* sinon la mémoire va sur une case vide */
b--;
while (a < b)
{
stock = s[a];
s[a] = s[b];
s[b] = stock;

a++;
b--;
}
}
