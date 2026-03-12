#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * init_dog - fonction qui initialise une variable de type struct
 * @d: identité numérique du chien
 * @name: nom du chien
 * @age: age du chien
 * @owner: propriétaire du chien
 * Return: rien
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
}
