#include "hash_tables.h"


/**
 * shash_table_create - creates a shash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created shash table, NULL otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(*ht));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}


/**
 * replace_value - replaces a value for a key that is already in the hash table
 * @ht: the hash table
 * @idx: index returned by hash function for the given key
 * @key: the given key
 * @value: value to associate with key
 *
 * Return: true if replacement is done, false otherwise
 */
bool replace_value(shash_table_t *ht, size_t idx, const char *key,
		const char *value)
{
	shash_node_t *curr;

	if (ht->array[idx])
	{
		curr = ht->array[idx];
		while (curr)
		{
			if (strcmp(key, curr->key) == 0)
			{
				free(curr->value);
				curr->value = strdup(value);
				return (true);
			}
			curr = curr->next;
		}
	}
	return (false);
}


/**
 * create_node - creates a new sorted hash table's node
 * @ht: the hash stable
 * @idx: index returned by hash function for the given key
 * @key: key to associate with value
 * @value: value to associate with key
 *
 * Return: new node, NULL otherwise
 */
shash_node_t *create_node(shash_table_t *ht, size_t idx, const char *key,
		const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	node->sprev = node->snext = NULL;
	return (node);
}


/**
 * sorted_insert - inserts a new node at a sorted position
 * @ht: hash table
 * @node: new node to insert
 *
 * Return: nothing
 */
void sorted_insert(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *curr, *next;

	curr = ht->shead, next = curr->snext;
	if (strcmp(curr->key, node->key) < 0)
	{
		while (next && strcmp(next->key, node->key) < 0)
			curr = next, next = next->snext;
		if (!curr->snext)
		{
			curr->snext = node;
			node->sprev = curr;
			ht->stail = node;
		}
		else
		{
			curr->snext = node;
			node->sprev = curr;
			node->snext = next;
			if (next)
				next->sprev = node;
		}
	}
	else
	{
		curr->sprev = node;
		node->snext = curr;
		ht->shead = node;
	}
}

/**
 * shash_table_set - adds an element to the shash table
 * @ht: the shash table to add or update key/value to
 * @key: entry's key.
 * @value: a value associated with the key.
 *
 * Return: (int) 1 if succeeded, 0 otherwise
 * NB:
 * - key cannot be an empty string
 * - value must be duplicated and can be an empty string
 * - in case of collision, add the new node at the beginning of the list
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *node;

	if (!ht || !strlen(key))
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (replace_value(ht, idx, key, value))
		return (1);
	node = create_node(ht, idx, key, value);
	if (!node)
		return (0);
	if (ht->shead)
		sorted_insert(ht, node);
	else
		ht->shead = ht->stail = node;
	return (1);
}


/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the shash table
 * @key: a key whose value should be retrieved
 *
 * Return: value associated with the key, NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ptr;

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


/**
 * shash_table_print - prints a shash table
 * @ht: the shash table to print
 *
 * Return: nothing
 * NB:
 * - print the key/value pairs in the order that they appear in the hash's
 * array
 * - Order: array, list
 * - if ht is NULL, don't print anything
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht && ht->shead)
	{
		ptr = ht->shead;
		printf("{");
		while (ptr)
		{
			printf("\'%s\':\'%s'", ptr->key, ptr->value);
			if (ptr->snext)
				printf(", ");
			ptr = ptr->snext;
		}
		printf("}\n");
	}
}


/**
 * shash_table_print_rev - prints a shash table in reverse order
 * @ht: the shash table to print
 *
 * Return: nothing
 * NB:
 * - print the key/value pairs in reverse of the order that they appear in the
 * shash's array
 * - Order: array, list
 * - if ht is NULL, don't print anything
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht && ht->stail)
	{
		ptr = ht->stail;
		printf("{");
		while (ptr)
		{
			printf("\'%s\':\'%s'", ptr->key, ptr->value);
			if (ptr->sprev)
				printf(", ");
			ptr = ptr->sprev;
		}
		printf("}\n");
	}
}


/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *ptr;

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
