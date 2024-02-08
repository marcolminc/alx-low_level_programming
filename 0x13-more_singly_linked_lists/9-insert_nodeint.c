#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the pointer to pointer to head node of the linked list.
 * @idx: index at which a node is to be inserted
 * @n: the value for the new node.
 * Return: the address of the new node or NULL.
 * if it's impossible to add new node at index idx, do not add adn return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	while (current != NULL && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}

	prev->next = new_node;
	new_node->next = current;
	return (new_node);
}
