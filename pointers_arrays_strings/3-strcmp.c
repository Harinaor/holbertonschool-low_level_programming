#include "main.h"

/**
 * _strcmp - ecrit une fonction qui compare 2 chaines
 * @s1: chaine 1
 * @s2: chaine 2
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
{
i++;
}
return (s1[i] - s2[i]);
}
