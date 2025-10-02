#include "lists.h"


/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head node of the dlistint_t list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
