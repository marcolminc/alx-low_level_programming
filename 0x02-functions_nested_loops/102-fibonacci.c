#include <stdio.h>
#define LIMIT 48
/**
 * main - check code
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int sum, prev, next;

	sum = 0, prev = 1, next = 2;
	printf("%li, %li, ", prev, next);
	for (i = 0; i < LIMIT; i++)
	{
		sum = prev + next;
		if (i < LIMIT - 1)
			printf("%li, ", sum);
		else
			printf("%li\n", sum);
		prev = next, next = sum;
	}
	return (0);
}
