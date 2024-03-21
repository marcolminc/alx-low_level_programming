#include "lists.h"

/**
 * free_dlistint - frees a dlist
 * @head: head node of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
