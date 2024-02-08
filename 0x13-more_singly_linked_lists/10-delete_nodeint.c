#include "lists.h"


/**
 * get_nodeint_at_index - retrieves a node in a linked list at given index.
 * @head: the pointer to head node of the linked list.
 * @index: index at which a node is retrieved.
 * Return: the node or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int trv;
	listint_t *current;

	trv = 0;
	current = head;
	while (current != NULL && trv < index)
	{
		trv++;
		current = current->next;
	}
	if (trv == index && current != NULL)
		return (current);
	return (NULL);
}


/**
 * delete_nodeint_at_index - deletes the node at a given index.
 * @head: pointer to pointer to head node of the list.
 * @index: the index whose node should be deleted.
 * Return: 1 for success, -1 for failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *tgt, *nxt;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tgt = *head;
		*head = (*head)->next;
		free(tgt);
		return (1);
	}

	prev = get_nodeint_at_index(*head, index - 1);
	tgt = get_nodeint_at_index(*head, index);
	nxt = get_nodeint_at_index(*head, index + 1);
	if (prev == NULL || tgt == NULL)
		return (-1);
	prev->next = nxt;
	free(tgt);
	return (1);
}
