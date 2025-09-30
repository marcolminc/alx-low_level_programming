#include "lists.h"


/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head node of the listint_t linked list
 *
 * Return: pointer to the first node of the reversed list
 * NB: no more than one loop, not allowed to use malloc, free or arrays
 * only a maximum of two variables in the function
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nxt;

	if (!*head)
		return (NULL);
	prev = NULL, nxt = (*head)->next;
	if (!nxt)
		return (*head);
	while (nxt)
	{
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
		nxt = nxt->next;
	}
	(*head)->next = prev;
	return (*head);
}
