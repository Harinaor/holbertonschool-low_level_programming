/**
 * print_alphabet - prints the alphabet in lowercase
 * en minuscule suivi d'un retour à la ligne
 * je peux utiliser _putchar 2 fois seulement
 * printf et puts sont interdits
 * les variables globales sont interdites
 * pas plus de 5 fonctions par fichiers
 * les bibliothèques standards sont interdites
 * Quelle est l'entrée? c'est une fonction
 * sortie attendue ? l'alphabet en minuscule suivi d'un retour à la ligne
 * transformations intermédiaire ? On utilise _putchar seulement 2 fois
 * Pas de print ni de puts
 * La fonction doit manipuler un _putchar pour afficher l'alphabet en minuscule
 * Une fonction = une inconnue à manipuler minimum.
 * Je dois stocker 22 lettres de l'alphabet dans _putchar
 * l'inconnue x change 22 fois
 * Je n'ai pas de tableau
 * j'ai donc une variable simple x
 * j'ai une bibliothèques qui appelle _putchar donc main.h
 * je n'ai pas besoin des autres biblio
 * _putchar affiche un caractère à la fois
 * peut être réutilisé puisqu'il est dans main.h
 * Rien ne dépasse 20-30 lignes
 * rien ne rend le code difficile à lire
 * ma fonction a une action claire = print_alphabet()
 * combien de variables créer? J'ai besoin d'afficher
 * 22 fois un character. Il me faut
 * une variable x pour la réutiliser 22 fois
 * avoir int x; simplifie énormement mon raisonnement
 * Je n'ai pas besoin d'autres variables
 * J'initialise la bibliothèques
 * Return: void
 */
#include "main.h"
/* J'appel la fonction */

void print_alphabet(void)
{
/*Je créé la variable*/
int x;
/* J'utilise _putchar pour afficher 22 fois un caractere */
/* Comme je sais à l'avance que je dois répéter ma */
/* variable 22 fois j'utilise logiquement une boucle for*/
/* qui va de a jusqu'à z (x = a; x = z; x++) */
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
/* J'utilise un second putchar pour afficher le retour à la ligne */
_putchar('\n');
/* Je retourne le résultat de la fonction, */
/* quand cela retourne 0 cela s'est bien passé */
}
