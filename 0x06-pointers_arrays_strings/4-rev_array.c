#include "main.h"


/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: size of a
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0, n--;
	while (i <= n)
		tmp = *(a + i), *(a + i++) = *(a + n), *(a + n--) = tmp;
}
