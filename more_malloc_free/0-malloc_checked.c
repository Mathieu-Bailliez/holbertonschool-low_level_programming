#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: unsigned int
 *
 * Return: a pointer to the allocate memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
