#include "lists.h"


/**
 * free_normal - frees a listint_t list by setting the head to NULL.
 * @head: the pointer to pointer of head node.
 * Return: nothing.
 */

size_t free_normal(listint_t **head)
{
	listint_t *current;
	size_t nodes;

	nodes = 0;
	if (*head == NULL)
		return (nodes);

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		nodes++;
		free(current);
	}
	*head = NULL;
	return (nodes);
}

/**
 * find_loop - finds out if the linked list has a loop.
 * @head: pointer to the head node of the linked list.
 * Return: node at start of a loop or NULL.
 */

listint_t *find_loop(listint_t *head)
{
	listint_t *slow, *fast;
	int has_loop;

	if (head == NULL)
		return (NULL);
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
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
		return (slow);
	}
	return (NULL);
}


/**
 * free_listint_safe - frees a linked list, escaping the loops.
 * @h: pointer to pointer to head node of the list
 * Return: nodes freed - size of the freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *loop_starter, *current, *freeable;
	size_t nodes;

	nodes = 0;
	loop_starter = NULL;
	if (*h == NULL)
		return (nodes);
	loop_starter = find_loop(*h);
	if (loop_starter == NULL)
		nodes = free_normal(h);
	else
	{
		current = *h;
		while (current != NULL)
		{
			if (current == loop_starter)
				break;
			freeable = current;
			current = current->next;
			nodes++;
			free(freeable);
			*h = current;
		}
		nodes += free_normal(&loop_starter);
	}

	*h = NULL;
	return (nodes);
}

