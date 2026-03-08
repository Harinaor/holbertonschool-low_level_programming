#include "main.h"

/**
 * *cap_string - met les première lettres en majuscule
 * @s: une chaine
 * Return: la chaine avec les premières lettres majuscules
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
