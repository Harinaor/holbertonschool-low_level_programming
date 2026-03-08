/**
 * reverse_array - inverser le contenu d'une chaine d'entier dans une autre
 * @n: le nombre d'éléments dans la chaine
 * @a: un tableau d'entier
 * Return: Rien
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

/* une boucle for pour parcourir les deux chaines */
/* on transvase le contenu de la chaine dans un entier temporaire */
/* a[n - 1 - i] c'est car le \0 oblige à prendre la valeur d'index n-1 */
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
