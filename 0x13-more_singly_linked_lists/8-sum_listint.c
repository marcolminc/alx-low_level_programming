#include "lists.h"


/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: head node of the listint_t linked list
 *
 * Return: sum of listint_t node data values (n)
 */
int sum_listint(listint_t *head)
{
	size_t sum;

	sum = 0;
	while (head)
		sum += head->n, head = head->next;
	return ((int)sum);
}
