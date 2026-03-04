#include "main.h"

/**
 * swap_int - Swap values of two integers
 * @a: Take the value of *b
 * @b: Take the value of temp
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
