#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to reverse
 */
void rev_string(char *s)
{
	int debut;
	int fin;
	char tmp;

	debut = 0;
	fin = 0;
	while (s[fin] != '\0')
		fin++;
	fin--;
	while (debut < fin)
	{
		tmp = s[debut];
		s[debut] = s[fin];
		s[fin] = tmp;
		debut++;
		fin--;
	}
}
