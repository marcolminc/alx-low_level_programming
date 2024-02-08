#include "lists.h"


/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to pointer to head node
 *
 * Return: Always 0.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nxt;

	prev = NULL;
	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	return (prev);
}
