#include "lists.h"

/**
 * add_node - adds a node at the beginning of a singly-linked list
 * @head: pointer to current head pointer
 * @str: data for the new node
 *
 * Return: pointer to resulting new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;
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
	if (*head == NULL)
	{
		*head = new;
		tail = NULL;
	}
	else
	{
		tail = *head;
		*head = new;
		new->next = tail;
	}
	return (*head);
}

