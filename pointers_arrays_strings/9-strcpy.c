#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copie la chaine pointé par src
 * dans le buffer pointé par dest
 * incluant \0
 * @src: la chaîne à copier
 * @dest: le buffer dest
 * Return: le pointeur sur dest
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

while (*src)
*dest++ = *src++;
*dest = '\0';
return (ptr);
}
