#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: a pointer to each element
 * @name: assign the name of the dog
 * @age: assign the age of the dog
 * @owner: assign the owner of the dog
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
