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
	hash_node_t *node;

	if (!ht || !strlen(key))
		return (0);
	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	ht->array[key_index((unsigned char *)key, ht->size)] = node;
	return (1);
}
