#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head node of the listint_t linked list
 * @index: index of the required listint_t linked list node
 *
 * Return: the listint_t node at specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *ptr;

	if (!index)
		return (head);
	ptr = head;
	for (i = 0; i < index && ptr; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
