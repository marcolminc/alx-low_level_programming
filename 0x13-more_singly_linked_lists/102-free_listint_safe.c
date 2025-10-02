#include "lists.h"


/**
 * hash_init - initializes the hash table
 *
 * Return: the hash table, NULL otherwise
 */
hash_tbl *hash_init()
{
	hash_tbl *hash;

	hash = malloc(sizeof(*hash));
	if (!hash)
		return (NULL);
	hash->nodes = malloc(HASH_SIZE * sizeof(listint_t *));
	if (!hash->nodes)
	{
		free(hash);
		return (NULL);
	}
	hash->pos = 0;
	hash->size = HASH_SIZE;
	return (hash);
}


/**
 * hashed - determines whether a node pointer is already in the hash table
 * @hash: the hash table
 * @node: the pointer to check whether in the hash table
 *
 * Return: (bool) true if a node is in hash table, false otherwise
 */
bool hashed(hash_tbl *hash, listint_t *node)
{
	size_t i;

	if (hash->pos)
		for (i = 0; i < hash->pos; i++)
			if (hash->nodes[i] == node)
				return (true);
	return (false);
}


/**
 * resize_nodes - resizes the nodes array of the hash table
 * @hash: the hash to resize
 * Return: (resized) hash
 */
void resize_nodes(hash_tbl *hash)
{
	listint_t **new;
	size_t i;

	new = malloc((hash->size + HASH_SIZE) * sizeof(listint_t *));
	if (!new)
	{
		free(hash->nodes);
		free(hash);
		exit(98);
	}
	for (i = 0; i < hash->pos; i++)
		new[i] = hash->nodes[i];
	free(hash->nodes);
	hash->nodes = new;
	hash->size += HASH_SIZE;
}


/**
 * hash_node - adds a node pointer to the hash table
 * @hash: the hash table
 * @node: the listint_t node to add to hash before freeing it
 */
void hash_node(hash_tbl *hash, listint_t *node)
{
	if (hash->pos >= hash->size)
		resize_nodes(hash);
	hash->nodes[hash->pos++] = node;
}


/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to head node of the listint_t linked list
 *
 * Return: size of the list that was freed
 * NB: the function sets the head to NULL
 * this function can free a list with a loop
 * the list should be traversed only once
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes;
	hash_tbl *hash;

	nodes = 0;
	if (!h || !*h)
		return (nodes);
	hash = hash_init();
	if (!hash)
		exit(98);
	while (*h && !hashed(hash, *h))
	{
		temp = *h;
		*h = (*h)->next;
		hash_node(hash, temp);
		free(temp);
		nodes++;
	}
	free(hash->nodes);
	free(hash);
	return (nodes);
}
