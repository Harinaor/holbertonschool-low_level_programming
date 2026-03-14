#include "main.h"
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
	dog_t *my_dog;
	/* Si la fonction échoue return: NULL*/
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = _strdup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = _strdup(owner);
	if (my_dog->owner == NULL)
	{
	free(my_dog->name);
	free(my_dog);
	return (NULL);
	}
	my_dog->age = age;

	return (my_dog);
}
