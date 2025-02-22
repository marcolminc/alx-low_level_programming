#include <stdio.h>


/**
 * main - entry point
 *
 * Return: 0 -> success
 */
int main(void)
{
	long prev, curr, nxt;
	long sum;

	prev = 1, curr = 2, nxt = 0, sum = 2;
	while (curr <= 4000000)
	{
		nxt = prev + curr;
		prev = curr, curr = nxt;
		if (curr % 2 == 0)
			sum += curr;
	}
	printf("%lu\n", sum);
	return (0);
}
