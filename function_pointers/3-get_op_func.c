#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - retourne le pointeur vers la fonction correspondant
 * a l'operateur donne
 * @s: chaine representant l'operateur
 * Return: pointeur vers la fonction, ou NULL si non trouve
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
