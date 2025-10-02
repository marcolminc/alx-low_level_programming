#include "lists.h"


/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head node of the linked list
 *
 * Return: address of the node where the loop starts, NULL otherwise
 * NB:
 * - t allowed to use malloc, free or arrays
 * - can only declare a max of two variables
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head)
	{
		tortoise = hare = head;
		while (tortoise && hare && hare->next)
		{
			tortoise = tortoise->next;
			hare = hare->next->next;
			if (tortoise == hare)
			{
				tortoise = head;
				while (tortoise != hare)
				{
					tortoise = tortoise->next;
					hare = hare->next;
				}
				return (tortoise);
			}
		}
	}
	return (NULL);
}
