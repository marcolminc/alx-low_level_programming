#include "lists.h"


/**
 * free_listint - frees a listint_t list
 * @head: head node of the listint_t list to free
 *
 * Return: nothing
 *
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head, head = head->next;
		free(ptr);
	}
}
