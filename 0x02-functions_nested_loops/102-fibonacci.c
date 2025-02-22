#include <stdio.h>


/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: 0 -> success
 */
int main(void)
{
	long prev, curr, nxt, i;

	prev = 1, curr = 2, nxt = 0;
	printf("%lu, %lu, ", prev, curr);
	for (i = 1; i <=48; i++)
	{
		nxt = prev + curr;
		prev = curr, curr = nxt;
		printf("%lu", curr);
		if (i < 48)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
