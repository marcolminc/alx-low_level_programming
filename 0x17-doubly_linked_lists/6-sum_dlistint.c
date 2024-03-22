#include "lists.h"

/**
 * sum_dlistint - sums values of all nodes of dlist
 * @head: head node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;
	dlistint_t *current;

	sum = 0;
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
