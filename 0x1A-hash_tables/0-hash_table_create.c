#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 *         or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* Allocate memory for the hash table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	return (NULL);

	/* Allocate memory for the array of pointers to nodes */
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
	return (NULL);
	}

	/* Initialize each pointer to NULL */
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	/* Set the size of the hash table */
	ht->size = size;

	return (ht);
}
