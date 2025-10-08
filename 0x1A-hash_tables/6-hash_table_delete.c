#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i])
			{
				ptr = ht->array[i];
				ht->array[i] = ht->array[i]->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
			}
		}
		free(ht->array);
		free(ht);
	}
}
