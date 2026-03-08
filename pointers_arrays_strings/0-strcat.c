#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string (must have enough space!)
 * @src: The source string to append
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;	/* index pour parcourir dest */
	int j;	/* index pour parcourir src  */

	/* ÉTAPE 1 : Avancer jusqu'au '\0' de dest */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	/* Maintenant i pointe sur le '\0' final de dest */

	/* ÉTAPE 2 & 3 : Copier chaque caractère de src dans dest */
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];  /* copier le caractère */
		i++;			   /* avancer dans dest   */
		j++;			   /* avancer dans src	  */
	}

	/* ÉTAPE 4 : Ajouter le '\0' final */
	dest[i] = '\0';

	/* ÉTAPE 5 : Retourner l'adresse du début de dest */
	return (dest);
}
