#include "lists.h"


/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list
 * @head: pointer to head node of dlistint_t list
 *
 * Return: (int) sum of all the data(n) of the dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
