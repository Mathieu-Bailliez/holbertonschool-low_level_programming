#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 */

void print_alphabet(void)
{
	int c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
