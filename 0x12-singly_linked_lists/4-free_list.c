#include "lists.h"


/**
 * free_list - frees a list_t list
 * @head: head node of the list_t list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
