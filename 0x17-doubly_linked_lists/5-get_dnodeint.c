#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node at a given index
 * @head: head node
 * @index: index to retrieve node
 * Return: found node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	i = 0;
	current = head;
	while (i < index && current != NULL)
		current = current->next, i++;
	if (i != index || current == NULL)
		return (NULL);
	return (current);
}
