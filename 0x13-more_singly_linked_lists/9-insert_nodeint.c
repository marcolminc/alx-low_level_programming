#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node of the listint_t linked list
 * @idx: index at which to insert a new node
 * @n: (int) - data part of a listint_t linked list node
 *
 * Return: address of the new node, NULL otherwise
 * even if it is only not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *curr;

	if (!*head)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n, new->next = NULL;
	if (!idx)
		new->next = *head, *head = new;
	prev = NULL, curr = *head;
	while (idx && curr)
		prev = curr, curr = curr->next, idx--;
	if (idx)
	{
		free(new);
		return (NULL);
	}
	prev->next = new, new->next = curr;
	return (new);
}
