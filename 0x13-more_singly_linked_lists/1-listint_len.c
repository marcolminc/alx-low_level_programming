#include "lists.h"


/**
 * listint_len - counts number of elements in a linked listint_t list
 * @h: head node of listint_t list
 *
 * Return: number of elements (nodes) in listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
		nodes++, h = h->next;
	return (nodes);
}
