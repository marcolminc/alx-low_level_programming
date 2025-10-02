#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a head pointer of dlistint_t list
 * @n: (int) value for the data part of the new node
 *
 * Return: the address of the new node, NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	new->prev = ptr;
	return (new);
}
