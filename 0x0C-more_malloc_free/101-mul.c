#include "main.h"


/**
 * _puts - custom printf for simply printing a string, followed by new line
 * @str: the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	if (str == NULL)
	{
		_putchar('\n');
		return;
	}
	i = 0;
	while (str[i] == '0' && str[i + 1] != '\0')
		i++;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}

/**
 * is_num - checks if a string is composed of digits only
 * @str: the string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_num(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * mul - multiplies two positive numbers, given as strings of decimal digits
 * @num1: the first number (as a string)
 * @num2: the second number (as a string)
 *
 * Return: the product (also, as a string)
 */
char *mul(char *num1, char *num2)
{
	int len1, len2, i, j, cy, n1, n2;
	char *ptr;

	for (len1 = 0; num1[len1]; len1++)
		;
	for (len2 = 0; num2[len2]; len2++)
		;
	ptr = calloc(len1 + len2 + 1, sizeof(*ptr));
	if (ptr == NULL)
	{
		_puts("Error");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		cy = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			cy += ptr[i + j + 1] + (n1 * n2);
			ptr[i + j + 1] = cy % 10;
			cy /= 10;
		}
		if (cy > 0)
			ptr[i + j + 1] += cy;
	}
	for (i = 0; i < len1 + len2; i++)
		ptr[i] += '0';
	return (ptr);
}

/**
 * main -entry point
 * @argc: number of (passed) arguments
 * @argv: the vector (array) of arguments passed
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_num(argv[1]) || !is_num(argv[2]))
	{
		_puts("Error");
		return (98);
	}
	result = mul(argv[1], argv[2]);
	_puts(result);
	free(result);
	return (0);
}
