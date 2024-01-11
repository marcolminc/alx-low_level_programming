#include <stdio.h>
#define LIMIT 48
/**
 * main - check code
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int prev, next, i;
	unsigned int sum;

	sum = 0, prev = 1, next = 2;
	printf("%d, %d, ", prev, next);
	for (i = 0; i < LIMIT; i++)
	{
		sum = prev + next;
		if (i < LIMIT - 1)
			printf("%u, ", sum);
		else
			printf("%u\n", sum);
		prev = next, next = sum;
	}
	return (0);
}
