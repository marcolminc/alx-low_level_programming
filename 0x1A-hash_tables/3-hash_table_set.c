#include "hash_tables.h"


/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update key/value to
 * @key: entry's key.
 * @value: a value associated with the key.
 *
 * Return: (int) 1 if succeeded, 0 otherwise
 * NB:
 * - key cannot be an empty string
 * - value must be duplicated and can be an empty string
 * - in case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *ptr;

	if (!ht || !strlen(key))
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		ptr = ht->array[idx];
		while (ptr)
		{
			if (strcmp(key, ptr->key) == 0)
			{
				ptr->value = strdup(value);
				return (1);
			}
			ptr = ptr->next;
		}
	}
	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
