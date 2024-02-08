#include "lists.h"


/**
 * sum_listint - sums all the data (n) of a listint_t linked list.
 * @head: the pointer to the head node of the list.
 * Return: the sum or 0.
 */

int sum_listint(listint_t *head)
{
	size_t sum;
	listint_t *current;

	current = head;
	sum = 0;
	if (current == NULL)
		return (sum);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
