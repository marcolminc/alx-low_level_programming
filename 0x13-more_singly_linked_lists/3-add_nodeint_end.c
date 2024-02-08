#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to head of listint_t list.
 * @n: the value for the new node.
 * Return: the address of the new node(element).
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t **current;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	current = head;
	while (*current != NULL)
		current = &(*current)->next;
	*current = new_node;
	return (new_node);
}
