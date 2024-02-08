#include "lists.h"


/**
 * find_listint_loop - finds out if the linked list has a loop.
 * @head: pointer to the head node of the linked list.
 * Return: node at start of a loop or NULL.
 */

listint_t *find_listint_loop(listint_t *head)
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
	if (!has_loop)
		return (NULL);
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}

