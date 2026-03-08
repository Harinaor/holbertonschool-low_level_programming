#include "main.h"

/**
 * cap_string - ecrit une fonction qui met en majuscule
 *
 * la première lettre de chaque mot d'une chaine
 * @s: une chaine
 * Return: string avec des Majuscules à chaque mots sans les séparateurs
 *
 */
char *cap_string(char *s)
{
int i = 0;
int j;

char separators[] = {
' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
};

while (s[i])
{
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
}

j = 0;
while (j < 13)
{
if (s[i - 1] == separators[j] && s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
j++;
}
i++;
}
return (s);
}
