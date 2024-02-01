#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to current head node pointer
 * @str: data for the new node
 *
 * Return: pointer to the new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t **current;
	list_t *new;
	char *string;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = string;
	new->len = strlen(string);
	new->next = NULL;
	current = head;
	while (*current != NULL)
		current = &(*current)->next;
	*current = new;
	return (new);
}
