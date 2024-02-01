#include "lists.h"

/**
 * list_len - computes length of a singly linked list
 * @h: head node of the singly linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes;
	const list_t *current;

	nodes = 0;
	current = h;
	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}
	return (nodes);
}
