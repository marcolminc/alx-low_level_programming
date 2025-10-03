#include "lists.h"


/**
 * uint_to_str - converts an unsigned integer to a string representation
 * @num: the unsigned integer to convert
 *
 * Return: the string, NULL otherwise
 */
char *uint_to_str(const unsigned int num)
{
	char *str;

	str = malloc(7 * sizeof(char));
	if (!str)
		return (NULL);
	snprintf(str, 7, "%u", num);
	return (str);
}


/**
 * is_palindrome - determines whether an unsigned integer is a palindrome
 * @num: the unsigned integer to check
 *
 * Return: (bool) true if the num is a palindrome, false otherwise
 */
bool is_palindrome(const unsigned int num)
{
	char *num_str;
	unsigned int left, right;

	num_str = uint_to_str(num);
	if (!num_str)
		exit(98);
	if (strlen(num_str) == 1)
	{
		free(num_str);
		return (true);
	}
	left = 0, right = strlen(num_str) - 1;
	while (left <= right)
	{
		if (num_str[left] != num_str[right])
		{
			free(num_str);
			return (false);
		}
		left++, right--;
	}
	free(num_str);
	return (true);
}


/**
 * write_palindrome - writes to a file the largest palindrome
 * product of two three-digit numbers
 *
 * Return: true if successful, false otherwise
 */
bool write_palindrome(void)
{
	unsigned int i, j, lg_palindrome, prod;
	int res;
	char *lg;
	FILE *file;

	lg_palindrome = 0;
	for (i = 100; i <= 999; i++)
	{
		for (j = 100; j <= 999; j++)
		{
			prod = i * j;
			if (is_palindrome(prod))
				lg_palindrome = (lg_palindrome > prod) ? lg_palindrome : prod;
		}
	}
	file = fopen("102-result", "w");
	if (!file)
	{
		perror("Error opening file");
		return (false);
	}

	lg = uint_to_str(lg_palindrome);
	if (!lg)
		exit(98);
	res = fputs(lg, file);
	if (res == EOF)
	{
		perror("Error writing to file");
		fclose(file);
		free(lg);
		return (false);
	}

	free(lg);
	return (true);
}
