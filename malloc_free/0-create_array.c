#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Allocate memory
 * @size: Define the size of the array
 * @c: Print the defined character in each case
 *
 * Return: adress of array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
	{
		array[count] = c;
	}
	return (array);
}
