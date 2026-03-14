#include "dog.h"
#include "main.h"
#include <stdio.h>

#include "dog.h"

void print_dog(struct dog *d);

/**
 * print_dog - Ecrire une fonction qui affiche un struct dog
 * @d: identité numérique du chien
 * Return: rien
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Dog file:\n");

if (d->name != NULL)
	printf("Name: %s\n", d->name);
else
	{
	printf("Name: (nil)\n");
	}
	printf("Age: %.6f\n", d->age);

if (d->owner == NULL)
	printf("Owner: (nil)\n");
else
	printf("Owner: %s\n", d->owner);

return;
}
