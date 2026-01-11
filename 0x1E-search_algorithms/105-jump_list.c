#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return: pointer to the first node where value is located, NULL otherwise
 * - use square root of the size of the list as the jump step
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev, *curr;
	size_t step, step_size;

	if (!list || !size)
		return (NULL);
	prev = curr = list;
	step_size = (size_t)sqrt((double)size);

	while (curr && curr->index + 1 < size && curr->n < value)
	{
		prev = curr;
		for (step = 0; curr->next && step < step_size; step++)
			curr = curr->next;
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, curr->index);
	for (; prev && prev->index <= curr->index; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		if (prev->index == curr->index)
			break;
	}
	return (NULL);
}
