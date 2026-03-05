#include "main.h"

/**
 * _strlen - Count the lenght of a string
 * @s: moove and count
 * Return: Result of the count
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}

