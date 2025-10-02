#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head node of the dlistint_t list
 * @index: index of required node (starting from 0)
 *
 * Return: the node at specified index, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (index)
	{
		head = head->next;
		index--;
	}
	return (head);
}
