#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: Size of the arrays
 * @action: Pointer to the function
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
