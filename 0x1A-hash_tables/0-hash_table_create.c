#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table, NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	hash = malloc(sizeof(*hash));
	if (!hash)
		return (NULL);
	hash->size = size;
	hash->array = malloc(((size > 0) ? size : 1) * sizeof(hash_node_t *));
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	return (hash);
}
