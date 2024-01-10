#include <stdio.h>
#define MAX 1024
/**
 * main - check code
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < MAX; i++)
		sum += (i % 3 == 0 || i % 5 == 0) ? i : 0;
	printf("%d\n", sum);
	return (0);
}
