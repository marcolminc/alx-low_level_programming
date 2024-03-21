#include "lists.h"

/**
 * add_dnodeint - adds a node at beginning of dlist
 * @head: pointer to head of dlist
 * @n: value for new node
 * Return: pointer to head of dlist
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
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
