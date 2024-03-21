#include "lists.h"

/**
 * dlistint_len - computes number of nodes in doubly linked list
 * @h: head node
 * Return: number of nodes counte(len)
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t nodes;

	current = h;
	nodes = 0;
	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}
	return (nodes);
}
