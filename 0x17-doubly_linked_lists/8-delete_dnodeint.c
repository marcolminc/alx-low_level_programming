#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes a node at specified
 * index (starting from 0)
 * @head: pointer to head pointer of the dlistint_t list
 * @index: index at which to delete a node
 *
 * Return: 1 if it succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *curr, *next;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		curr = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	curr = *head;
	while (curr && index--)
		curr = curr->next;
	if (!curr)
		return (-1);
	prev = curr->prev;
	next = curr->next;
	prev->next = next;
	if (next)
		next->prev = prev;
	free(curr);
	return (1);
}
