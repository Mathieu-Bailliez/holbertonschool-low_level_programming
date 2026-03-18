#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - Calcule la longueur d'une chaîne
 * @s: La chaîne à mesurer
 *
 * Return: La longueur de la chaîne
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - Copie une chaîne de caractères
 * @dest: Destination
 * @src: Source
 *
 * Return: Le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Return: Pointeur vers le nouveau chien (dog_t), ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len_n, len_o;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	len_n = _strlen(name);
	len_o = _strlen(owner);

	d->name = malloc(sizeof(char) * (len_n + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (len_o + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
