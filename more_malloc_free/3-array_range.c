#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - crée un tableau d'entiers de min à max inclus
 * @min: valeur minimale (première valeur du tableau)
 * @max: valeur maximale (dernière valeur du tableau)
 *
 * Return: pointeur vers le tableau alloué, ou NULL si échec
 */
int *array_range(int min, int max)
{
	int *arr;
	int  size;
	int  i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}
