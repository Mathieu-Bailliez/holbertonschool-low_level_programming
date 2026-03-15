#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two string
 * @s1: Sring 1
 * @s2: String 2
 * @n: number of bytes of s2 to concatenates
 *
 * Return: a pointer char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[len1 + j] = s2[j];

	ptr[len1 + n] = '\0';

	return (ptr);
}

