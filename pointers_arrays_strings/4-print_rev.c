#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string to print in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len; /* Stocke la longueur du texte */
	int i; /* sert a parcourir a l'envers */

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1; /* Commence a la derniere lettre */
	while (i >= 0) /* on s'arréte quand i passe en dessous de 0 */
	{
		_putchar(s[i]); /* on affiche la lettre a la position i */
		i--;
	}
	_putchar('\n'); /* saut de ligne a la fin */
}
