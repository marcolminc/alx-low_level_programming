#include "lists.h"

/**
 * get_nodeint_at_index - retrieves a node in a linked list at given index.
 * @head: the pointer to head node of the linked list.
 * @index: index at which a node is retrieved.
 * Return: the node or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int trv;
	listint_t *current;

	trv = 0;
	current = head;
	while (current != NULL && trv < index)
	{
		trv++;
		current = current->next;
	}
	if (trv == index && current != NULL)
		return (current);
	return (NULL);
}


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
	listint_t *prev_node, *nxt_node, *new_node;

	if (head == NULL)
		return (NULL);
	else if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	prev_node = get_nodeint_at_index(*head, (idx - 1));
	nxt_node = get_nodeint_at_index(*head, idx);
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (prev_node == NULL || nxt_node == NULL || new_node == NULL)
		return (NULL);
	prev_node->next = new_node;
	new_node->n = n;
	new_node->next = nxt_node;
	return (new_node);
}
