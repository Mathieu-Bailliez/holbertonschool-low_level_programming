#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - alloue de la mémoire pour un tableau et initialise à zéro
 * @nmemb: nombre d'éléments dans le tableau
 * @size: taille en octets de chaque élément
 *
 * Return: pointeur vers la mémoire allouée, ou NULL si échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *ptr;
	unsigned int   total;
	unsigned int   i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
