#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of cents
 * @argc: number of CLI args
 * @argv: vector of CLI args
 *
 * Return: 0 -> success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]), coins = 0;
	while (cents >= 25)
		coins++, cents -= 25;
	while (cents >= 10)
		coins++, cents -= 10;
	while (cents >= 5)
		coins++, cents -= 5;
	while (cents >= 2)
		coins++, cents -= 2;
	coins += cents;
	printf("%d\n", coins);
	return (0);
}
