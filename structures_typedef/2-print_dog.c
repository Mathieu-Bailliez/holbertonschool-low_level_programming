#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_dog - print a struct called dog
* @d: pointer to a type struct dog
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("name: (nil)\n");
	} else
	{
		printf("name: %s\n", d->name);
	}

	printf("age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("owner: (nil)\n");
	} else
	{
		printf("owner: %s\n", d->owner);
	}
}
