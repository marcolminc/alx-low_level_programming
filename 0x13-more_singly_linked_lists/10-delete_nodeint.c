#include "lists.h"


/**
 * delete_nodeint_at_index - deletes a node at  index from linked list
 * @head: pointer to the head node of the linked list
 * @index: the index at which to delete a node (index starts at 0)
 *
 * Return: 1 if deletion succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *curr;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		return (1);
	}
	for (i = 0, prev = curr = *head; i < index; i++)
	{
		prev = curr, curr = curr->next;
		if (!curr)
			return (-1);
	}
	prev->next = curr->next;
	free(curr);
	return (1);
}
