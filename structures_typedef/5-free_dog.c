#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Libère la mémoire allouée pour un chien
 * @d: Pointeur vers la structure dog_t à libérer
 *
 * Description: Libère d'abord les membres alloués dynamiquement
 * (name et owner) avant de libérer la structure elle-même.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Libérer les copies des chaînes créées dans new_dog */
		free(d->name);
		free(d->owner);

		/* Enfin, libérer la structure globale */
		free(d);
	}
}
