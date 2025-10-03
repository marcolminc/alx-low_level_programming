#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given index(position)
 * @h: pointer to the head pointer of the dlistint_t linked list
 * @idx: index at which to insert a new node
 * @n: (int) the data value for the new node
 *
 * Return: address of the new node, NULL otherwise
 * NB: if it is not possible to add the new node and
 * a specified index, return NULL, without adding the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr;

	if (!h)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = new->next = NULL;
	if (!idx)
	{
		if (*h)
		{
			(*h)->prev = new;
			new->next = *h;
		}
		else
			*h = new;
		return (new);
	}
	ptr = *h;
	while (idx - 1)
	{
		if (ptr)
			ptr = ptr->next;
		else
			return (NULL);
		idx--;
	}
	new->next = ptr->next;
	if (ptr->next)
		ptr->next->prev = new;
	ptr->next = new;
	new->prev = ptr;
	return (new);
}
