#include "lists.h"


/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head node of the listint_t list
 *
 * Return: nothing
 * Description: it sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (head && *head)
	{
		ptr = *head, *head = (*head)->next;
		free(ptr);
	}
}
