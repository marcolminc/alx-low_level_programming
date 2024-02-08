#include "lists.h"

/**
 * loop_finder - finds out whether a linked list has a loop
 * @head: the head of the linked list
 *
 * Return: pointer to node of beginning of loop
 */
listint_t *loop_finder(listint_t *head)
{
	listint_t *slow, *fast;
	int has_loop;

	slow = head;
	fast = head;
	has_loop = 0;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			has_loop = 1;
			break;
		}
	}
	if (has_loop)
	{
		slow = head;
		while (slow != NULL && slow->next != NULL)
		{
			slow = slow->next;
			fast = fast->next;
			if (slow == fast)
				return (slow);
		}
	}
	return (NULL);
}

/**
 * print_normal - prints all the elements of a listint_t list.
 * @h: the head node of the list.
 * Return: the number of nodes.
 */

size_t print_normal(listint_t *h)
{
	size_t nodes;
	listint_t *current;

	current = h, nodes = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		nodes++, current = current->next;
	}
	return (nodes);
}
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head node of the linked list.
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *loop_starter;
	const listint_t *current;
	size_t nodes;
	int loop_cycle;

	nodes = 0, loop_cycle = 0;
	loop_starter = loop_finder((listint_t *)head);
	if (loop_starter == NULL)
		nodes += print_normal((listint_t *)head);

	current = head;
	if (current == NULL)
		exit(98);
	while (current != NULL)
	{
		if (current == loop_starter)
			loop_cycle++;
		if (loop_cycle > 1)
			break;
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++, current = current->next;
	}
	return (nodes);
}
