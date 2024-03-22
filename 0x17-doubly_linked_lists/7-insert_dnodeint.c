#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at specified index
 * @h: pointer to head node
 * @idx: index
 * @n: value
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (*h == NULL && idx > 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = create_node(n);
	current = *h;
	i = 0;
	while (i < idx - 1 && current != NULL)
		current = current->next, i++;
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
