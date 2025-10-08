#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: a key whose value should be retrieved
 *
 * Return: value associated with the key, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;

	if (ht && strlen(key))
	{
		ptr = ht->array[key_index((unsigned char *)key, ht->size)];
		while (ptr)
		{
			if (strcmp(key, ptr->key) == 0)
				return (ptr->value);
			ptr = ptr->next;
		}
	}
	return (NULL);
}
