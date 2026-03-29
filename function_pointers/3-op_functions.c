#include "3-calc.h"

/**
 * op_add - retourne la somme de a et b
 * @a: premier entier
 * @b: deuxieme entier
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - retourne la difference de a et b
 * @a: premier entier
 * @b: deuxieme entier
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - retourne le produit de a et b
 * @a: premier entier
 * @b: deuxieme entier
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - retourne le resultat de la division de a par b
 * @a: premier entier
 * @b: deuxieme entier
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - retourne le reste de la division de a par b
 * @a: premier entier
 * @b: deuxieme entier
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
