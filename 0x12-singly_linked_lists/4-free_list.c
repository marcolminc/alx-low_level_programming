#include "lists.h"

/**
 * free_list - frees a singly-linked list
 * @head: pointer to head node of the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		if (current->str != NULL)
			free(current->str);
		free(current);
	}
}
