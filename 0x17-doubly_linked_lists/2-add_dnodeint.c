#include "lists.h"


/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to head node of dlistint_t linked list
 * @n: (int) value for the data part of the new dnodeint node
 *
 * Return: address of the new node (element), NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
