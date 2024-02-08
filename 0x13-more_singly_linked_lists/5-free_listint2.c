#include "lists.h"


/**
 * free_listint2 - frees a listint_t list by setting the head to NULL.
 * @head: the pointer to pointer of head node.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
