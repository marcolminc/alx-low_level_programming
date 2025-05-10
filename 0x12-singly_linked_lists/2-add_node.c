#include "lists.h"
#include <string.h>


/**
 * _strlen - gives length of a string (number of characters)
 * @str: the string to measure
 * @acc: accumulator for the length of str
 * Return: length of str
 */
size_t _strlen(char *str, size_t acc)
{
	if (!str || *str == '\0')
		return (acc);
	return (_strlen(str + 1, acc + 1));
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list_t list
 * @str: (string) - the data part of a new node
 * Return: new head of the list_t list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *node_str;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	node_str = strdup(str);
	if (!node_str)
	{
		free(new);
		return (NULL);
	}
	new->str = node_str;
	new->len = _strlen(node_str, 0);
	new->next = *head;
	*head = new;
	return (*head);
}
