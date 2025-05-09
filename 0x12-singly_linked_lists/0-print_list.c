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

	nodes = 0;
	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nodes++, h = h->next;
	}
	return (nodes);
}
