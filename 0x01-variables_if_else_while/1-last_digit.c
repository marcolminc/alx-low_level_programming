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
	printf("Last digit of %d is ", n);
	n = (n < 0) ? (n * -1) % 10 : n % 10;
	printf("%d and is ", n);
	if (n > 5)
		printf("greater that 5\n");
	else if (n == 0)
		printf("zero\n");
	else if (n != 0 && n < 6)
		printf("less that 6 and not 0\n");

	return (0);
}
