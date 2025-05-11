#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head node of listint_t list
 * @n: (integer) - data part of listint_t node
 *
 * Return: address of the new element, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head)
		new->next = *head;
	else
		new->next = NULL;
	*head = new;
	return (*head);
}
