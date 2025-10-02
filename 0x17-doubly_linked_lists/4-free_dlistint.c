#include "lists.h"


/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node of the dlistint_t list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
