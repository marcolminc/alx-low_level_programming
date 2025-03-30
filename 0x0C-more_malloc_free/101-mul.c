#include "main.h"


/**
 * _puts - prints a string, followed by a new line
 * @str: the string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	size_t i;

	for (i = 0; str && str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}


/**
 * _strlen - measures length of a string
 * @str: the string to measure
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	size_t i;

	for (i = 0; str && str[i]; i++)
		;
	return ((int)i);
}


/**
 * is_num - checks whether a string is composed of digits only
 * @str: the string to check
 *
 * Return: 1 -> str is of digits only, 0 otherwise
 */
int is_num(char *str)
{
	if (!str || *str == '\0')
		return (0);
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _calloc - allocates an initialized array
 * @nmemb: number of members of the array
 * @size: size of each member of the array
 *
 * Return: the allocated array, NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *res;

	if (!nmemb || !size)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		res[i] = 0;
	return ((void *)res);
}


/**
 * main - multiplies two positive numbers
 * @argc: number of CLI args passed
 * @argv: vector of CLI args passed
 *
 * Return: 0 -> success, > 0 otherwise
 */
int main(int argc, char **argv)
{
	ssize_t i, j, k, plc_v, prod;
	ssize_t size_1, size_2, size_res;
	int *res;

	if (argc != 3 || !is_num(argv[1]) || !is_num(argv[2]))
	{
		_puts("Error");
		exit(98);
	}
	size_1 = _strlen(argv[1]), size_2 = _strlen(argv[2]);
	size_res = size_1 + size_2;
	res = _calloc(size_res, sizeof(*res));
	plc_v = prod = 0;
	for (i = size_2 - 1; i >= 0; i--)
	{
		k = size_res - 1 - plc_v++;
		for (j = size_1 - 1; j >= 0; j--)
		{
			prod += res[k] + (argv[2][i] - '0') * (argv[1][j] - '0');
			res[k--] = prod % 10, prod /= 10;
		}
		res[k] = prod;
	}
	if (prod > 0)
		i = 0;
	else
		i = 1;
	for (; i < size_res; i++)
		_putchar(res[i] + '0');
	_putchar('\n');
	free(res);
	return (0);
}
