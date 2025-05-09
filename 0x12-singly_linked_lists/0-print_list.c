#include "lists.h"
#include <stdio.h>


/**
 * print_list - prints all the elements (nodes) of a singly linked list
 * @h: header of the singly list_t list
 * Return: number of elements (printed)
 * Description: if str is NULL, an element is printed as "[0] (nil)"
 */
size_t print_list(const list_t *h)
{
	size_t nodes;
	const list_t *current;

	nodes = 0;
	current = h;
	while (current)
	{
		if (!current->str)
			printf("[0] (nil)\n");
		printf("[%u] %s\n", current->len, current->str);
		nodes++, current = current->next;
	}
	return (nodes);
}
