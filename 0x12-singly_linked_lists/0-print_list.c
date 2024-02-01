#include "lists.h"

/**
 * print_list - prints nodes of a singly linked list
 * @h: head of the linked list
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes;
	const list_t *current;

	current = h;
	nodes = 0;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)");
		printf("[%u] %s\n", current->len, current->str);
		nodes++;
		current = current->next;
	}
	return (nodes);
}
