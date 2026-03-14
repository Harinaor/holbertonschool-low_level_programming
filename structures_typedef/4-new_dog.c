#include <stdlib.h>
#include "dog.h"

int _strlen(char *s)
{
    int i = 0;

    while (s && s[i])
        i++;

    return (i);
}

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