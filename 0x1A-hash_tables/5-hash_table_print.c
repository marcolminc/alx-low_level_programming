#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Return: nothing
 * NB:
 * - print key/value pairs in the order that they appear in the hash's array
 * - Order: array, list
 * - if ht is NULL, don't print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *ptr;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		ptr = ht->array[i];
		while (ptr)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			if (ptr->next)
				printf(", ");
			ptr = ptr->next;
		}
		for (j = i; j < ht->size; j++)
			if (ht->array[i])
			{
				printf(", ");
				break;
			}
	}
	printf("}\n");
}
