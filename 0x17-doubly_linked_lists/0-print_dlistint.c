#include "lists.h"

/**
 * print_dlistint - prints the elementsof the doubly linked list
 * @h: head node
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t nodes;

	current = h;
	nodes = 0;
	while (current != NULL)
	{
		nodes++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (nodes);
}
