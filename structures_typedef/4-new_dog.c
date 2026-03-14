#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calcule la longueur d'une chaîne de caractères
 * @s: la chaîne de caractères à mesurer
 * Return: la longueur de la chaîne de caractères
 */
int _strlen(char *s)
{
int i = 0;

while (s && s[i])
i++;

return (i);
}

/**
 * _copy - copie une chaîne de caractères
 * @s: la chaîne de caractères à copier
 * Return: un pointeur vers la copie de la chaîne de
 * caractères, ou NULL en cas d'échec
 */
char *_copy(char *s)
{
int i, len;
char *p;

if (s == NULL)
return (NULL);

len = _strlen(s);

p = malloc(sizeof(char) * (len + 1));
if (p == NULL)
return (NULL);

for (i = 0; i < len; i++)
p[i] = s[i];

p[len] = '\0';

return (p);
}

/**
 * new_dog - crée une nouvelle instance de dog_t
 * @name: le nom du chien
 * @age: l'âge du chien
 * @owner: le propriétaire du chien
 * Return: un pointeur vers la nouvelle instance de dog_t,
 * ou NULL en cas d'échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = _copy(name);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = _copy(owner);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

dog->age = age;

return (dog);
}
