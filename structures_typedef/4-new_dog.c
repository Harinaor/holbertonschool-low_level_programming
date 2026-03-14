#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - une fonction qui crée un nouveau chien
 * @name: nom du chien
 * @age: age du chien
 * @owner: propriétaire du chien
 * Return: NULL si la fonction échoue
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog_t;
/* Si la fonction échoue return: NULL*/
	dog_t = malloc(sizeof(dog_t));
	if (dog_t == NULL)
		return (NULL);

	dog_t->name = name;
	dog_t->age = age;
	dog_t->owner = owner;

	return (dog_t);
}
