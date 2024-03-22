#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: head node pointer
 * @index: index
 * Return: 1 for success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	int i;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	i = 0;
	while (i < index && current != NULL)
		current = current->next, i++;
	if (current == NULL)
		return (-1);
	if (current->next != NULL)
		current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);
	return (1);
}
