#include "lists.h"


/**
 * init_hash - initializes a hash table
 *
 * Return: the hash table, otherwise the program exits
 */
hash_t *init_hash()
{
	hash_t *res;

	res = malloc(sizeof(*res));
	if (!res)
		exit(98);
	res->hash = malloc(HASH_SIZE * sizeof(listint_t *));
	if (!res->hash)
	{
		free(res);
		exit(98);
	}
	res->pos = 0;
	res->size = HASH_SIZE;
	return (res);
}


/**
 * resize_hash - resizes the hash table when full
 * @inpt: the hash table to resize
 *
 * Return: new hash (double the old size)
 */
void resize_hash(hash_t *inpt)
{
	listint_t **new;
	size_t i;

	if (!inpt)
		exit(98);
	new = malloc((inpt->size + HASH_SIZE) * sizeof(listint_t *));
	if (!new)
	{
		free(inpt->hash);
		free(inpt);
		exit(98);
	}
	for (i = 0; i < inpt->pos; i++)
		new[i] = inpt->hash[i];
	free(inpt->hash);
	inpt->hash = new;
	inpt->size += HASH_SIZE;
}


/**
 * add_hash - adds a node poiter to the hash table
 * @hash: the hash table
 * @node: node whose address to insert to the hash table
 *
 * Return: 1 if the node is added and printed, 0 otherwise
 */
size_t add_hash(hash_t *hash, const listint_t *node)
{
	if (hash->pos >= hash->size)
		resize_hash(hash);
	hash->hash[hash->pos++] = (listint_t *)node;
	return (printf("[%p] %d\n", (void *)node, node->n));
}

/**
 * is_hashed - checks whether a given node is already in the hash table
 * @hash: the hash table
 * @ptr: the node pointer to check whether in the hash table
 *
 * Return: true if the the node pointer is in hash table, false otherwise
 */
bool is_hashed(hash_t *hash, listint_t *ptr)
{
	size_t i;

	if (!hash->pos)
		return (false);
	for (i = 0; i < hash->pos; i++)
		if (hash->hash[i] == ptr)
		{
			printf("-> [%p] %d", (void *)ptr, ptr->n);
			return (true);
		}
	return (false);
}


/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head node of the listint_t linked list
 * Return: number of nodes in the list
 * NB:
 * - this function can print lists with a loop
 * - it should go through the list only once
 * - if it fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *ptr;
	size_t nodes;
	hash_t *hash;

	nodes = 0;
	if (!head)
		return (nodes);
	hash = init_hash();
	ptr = (listint_t *)head;
	while (ptr && !is_hashed(hash, ptr))
	{
		nodes += add_hash(hash, ptr);
		ptr = ptr->next;
	}
	free(hash->hash);
	free(hash);
	return (nodes);
}
