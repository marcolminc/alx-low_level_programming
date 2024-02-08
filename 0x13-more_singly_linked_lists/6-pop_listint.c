#include "lists.h"


/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer of head node.
 * Return: the head node's data or 0.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	current = *head;
	n = 0;
	if (current == NULL)
		return (n);
	*head = (*head)->next;
	n = current->n;
	free(current);
	return (n);
}
