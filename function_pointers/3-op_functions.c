/*Ce fichier devrait contenir les 5 fonctions suivantes et pas plus*/
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

printf("arguments correctes\n");
return 0;
}

exit(98);

if (operator != '+' &&
    operator != '-' &&
    operator != '*' &&
    operator != '/' &&
    operator != '%')
{
    printf("Error\n");
    exit(99);
}

if (operator == '/' || operator == '%' && b == 0)
{
	printf("Error\n");

exit (100);
}

/**
 * op_add - la somme de a et b. 
 * @num1: un entier
 * @num2: un autre entier
 * Return: la somme de a et b
 */
int op_add(int num1, int num2);
{
	op_add = sum(num1,num2);
	return (op_add);
}

/**
 * op_sub - la soustraction de a et b. 
 * @num1: un entier
 * @num2: un autre entier
 * Return: la soustraction de a et b
 */
int op_sub(int num1, int num2);
{
	op_sub = sub(num1,num2);
	return(op_sub);
}

/**
 * op_mul - la multiplication de a et b. 
 * @num1: un entier
 * @num2: un autre entier
 * Return: le produit de a et b
 */
int op_mul(int num1, int num2);
{
	op_mul = mul(num1,num2);
	return(op_mul);
}

/**
 * op_div - la division de a et b. 
 * @num1: un entier
 * @num2: un autre entier
 * Return: la division de a et b
 */
int op_div(int num1, int num2);
{
	op_div = div(num1,num2);
	return(op_div);
}

/**
 * op_mod - calcule le reste de la division de a et b. 
 * @num1: un entier
 * @num2: un autre entier
 * Return: le reste de a et b
 */
int op_mod(int num1, int num2);
{
	op_mod = mod(num1,num2);
	return(op_mod);
}

/*CONSIGNES*/
Ecrire un programme qui réalise des opérations simples.

Usage: calc 
calc 10 + 5
Ça devrait renvoyer : 15

calc num1 operator num2

num1 num2
operator → l’opérateur mathématiques que tu veux appliquer. Par exemple :
+ pour addition
- pour soustraction
* pour multiplication
/ pour division

@num1: un entier 
@num2: un autre entier
Utilise la fonction atoi pour les 
convertir la chaine d'entrée en entier 

L'opérateur est un des suivants :
+: addition
-: substraction
*: multiplication
/: division
%: modulo

Le programme affiche le résultat de l'opération,
suivi par une nouvelle ligne
Tu peux assumer que le résultat de toutes les opérations 
peuvent être stockées dans un entier

