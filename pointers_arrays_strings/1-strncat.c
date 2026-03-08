#include "main.h"

/**
 * _strncat - Concatenates at most n bytes of src to dest
 * @dest: The destination string (must have enough space!)
 * @src: The source string to append
 * @n: Maximum number of bytes to copy from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i; /* index pour parcourir dest */
	int j; /* index pour parcourir src	*/

	/* ÉTAPE 1 : Trouver la fin de dest (le '\0') */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	/* i est maintenant sur le '\0' de dest */

	/* ÉTAPE 2 : Copier src dans dest, max n caractères */
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j]; /* copier le caractère courant */
		i++;			  /* avancer dans dest			 */
		j++;			  /* avancer dans src			 */
	}

	/* ÉTAPE 3 : Toujours terminer par '\0' */
	dest[i] = '\0';

	/* ÉTAPE 4 : Retourner dest */
	return (dest);
}
