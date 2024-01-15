/**
 * print_sqare - prints a square of desired size
 * @size: number of chars that form the square
 *
 * Return: void
 */
 void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
