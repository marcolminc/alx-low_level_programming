#include <stdio.h>


/**
 * main - entry point
 *
 * Return: 0 -> success
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
		sum += ((i % 3 == 0 || i % 5 == 0) ? i : 0);
	printf("%d\n", sum);
	return (0);
}
