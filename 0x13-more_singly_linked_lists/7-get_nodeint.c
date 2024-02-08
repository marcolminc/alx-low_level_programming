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
