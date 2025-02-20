#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is ", n);
	if (n < 0)
		printf("negative\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("positive\n");
	return (0);
}
