#include "main.h"

/**
 * _strncpy - Copies at most n bytes from src to dest
 * @dest: The destination buffer
 * @src: The source string to copy
 * @n: Maximum number of bytes to copy/write
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i; /* index pour parcourir src et dest */

	/* PHASE 1 : Copier les caractères de src dans dest */
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i]; /* copier le caractère courant */
		i++;			  /* avancer dans les deux		 */
	}

	/* PHASE 2 : Si src est plus court que n → compléter avec des '\0' */
	while (i < n)
	{
		dest[i] = '\0'; /* remplir le reste avec des zéros */
		i++;
	}

	/* Retourner dest (PAS de '\0' ajouté si src >= n caractères) */
	return (dest);
}
