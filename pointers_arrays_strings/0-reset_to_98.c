/**
 * reset_to_98 - changer la valeur d'une adresse à 98
 * @n: l'entier avec une valeur
 *la mémoire est |adresse mémoire|Contenu de la mémoire|
 *               | adresse       | paquet              |
 * Le pointeur *paquet pointe vers paquet et permet d'en changer la valeur
 * adresse de la mémoire dans la machine
 * n c'est la place en mémoire physique
 * Return: valeur pointée à 98
*/
void reset_to_98(int *n)
{
*n = 98;
return;
}
