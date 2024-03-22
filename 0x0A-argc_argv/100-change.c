#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints minimum number of coins to make change for an amount
 * @argc: number of args
 * @argv: args vector
 * Return: exit status(0 for success)
 */
int main(int argc, char **argv)
{
	int cents, amount, i;
	const int denominations[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		puts("0");
		return (0);
	}
	cents = 0;
	for (i = 0; i < 5 && amount > 0; i++)
	{
		cents += amount / denominations[i];
		amount %= denominations[i];
	}
	printf("%d\n", cents);
	return (0);
}
