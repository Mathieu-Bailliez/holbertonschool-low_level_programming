#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure dog à initialiser
 * @name: Nom du chien
 * @age: Age du chien
 * @owner: Propriétaire du chien
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
