#include "lists.h"
#include <string.h>


/**
 * _strlen - gives length of a string (number of characters)
 * @str: the string to measure
 * @acc: accumulator for length of str
 *
 * Return: length of str
 */
size_t _strlen(char *str, size_t acc)
{
	if (!str || *str == '\0')
		return (acc);
	return (_strlen(str + 1, acc + 1));
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head node of the list_t list
 * @str: (string) - the data part of a new list_t node
 *
 * Return: pointer to the head of list_t list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new;
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
	new->next = NULL;
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
