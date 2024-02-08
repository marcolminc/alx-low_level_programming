#include "lists.h"


/**
 * listint_len - counts elements in a linked listint_t list.
 * @h: the head node of listint_t list.
 * Return: the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t elements;
	const listint_t *current;

	current = h, elements = 0;
	while (current != NULL)
		elements++, current = current->next;
	return (elements);
}
