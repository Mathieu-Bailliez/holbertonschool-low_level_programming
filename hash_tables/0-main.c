#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - test hash_table_create
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);

	if (ht == NULL)
	{
		printf("Error: could not create hash table\n");
		return (EXIT_FAILURE);
	}

	printf("Hash table address: %p\n", (void *)ht);
	printf("Size: %lu\n", ht->size);
	printf("Array address: %p\n", (void *)ht->array);

	return (EXIT_SUCCESS);
}
