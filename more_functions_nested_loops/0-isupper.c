#include "main.h"

/**
 * _isupper - fonction qui vérifie si une lettre est en majuscule ou non.
 * @c: la lettre à vérifier
 * Return: 1 si c est majuscule, 0 sinon
 */

int _isupper(int c)
{
if (c >= 'A' && c >= 'Z')
return (0);
else
return (1);
}

