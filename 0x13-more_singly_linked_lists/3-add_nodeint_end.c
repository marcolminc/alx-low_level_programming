#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head node of listint_t list
 * @n: (integer) - data part of the listint_t node
 *
 * Return: address of the new element, NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n, new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (*head);
}
