#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the head node of the list.
 * Return: the number of nodes.
 */


size_t print_listint(const listint_t *h)
{
	size_t nodes;
	const listint_t *current;

	current = h, nodes = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		nodes++, current = current->next;
	}
	return (nodes);
}
