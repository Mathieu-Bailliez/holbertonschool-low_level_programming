#include "lists.h"

/**
 * list_len - retourne le nombre d'elements d'une liste chainee
 * @h: pointeur vers le premier noeud
 *
 * Return: nombre de noeuds
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

