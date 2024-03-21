#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of dlist
 * @head: pointer to head node of dlist
 * @n: value for the new node
 * Return: pointer to new added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}


/**
 * create_node - creates a new dlist node
 * @n: the value for the new node
 * Return: the pointer to the new node
 */
dlistint_t *create_node(const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
