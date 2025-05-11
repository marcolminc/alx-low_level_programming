#include "lists.h"


/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node of a listint_t list
 *
 * Return: the (deleted) head node's data (integer)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int pop;

	if (!head || !*head)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	pop = ptr->n;
	free(ptr);
	return (pop);
}
