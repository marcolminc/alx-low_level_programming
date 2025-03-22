#include "main.h"
#include <stdio.h>

/**
 * _strlen - measures length of string
 * @s: string to measure
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	for (; s[len]; len++)
		;
	return (len);
}

/**
 * infinite_add - adds two numbers, given as endless strings of digits
 * @n1: the first string of digits
 * @n2: the second string of digits
 * @r: the result buffer for the result string
 * @size_r: size of the r (result buffer)
 *
 * Return: pointer to result buffer (r)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1, len2, max_len;
	unsigned int sum, carry;

	len1 = _strlen(n1), len2 = _strlen(n2);
	max_len = (len1 > len2) ? len1 : len2;
	if (max_len + 1 >= size_r)
		return (0);
	i = len1 - 1, j = len2 - 1;
	carry = 0, k = max_len;
	*(r + k + 1) = '\0';
	while (k >= 0)
	{
		sum = carry;
		sum += (i >= 0) ? *(n1 + i--) - '0' : 0;
		sum += (j >= 0) ? *(n2 + j--) - '0' : 0;
		*(r + k--) = (sum % 10) + '0';
		carry = sum / 10;
	}
	if (*r == '0')
	{
		for (k = 0; *(r + k); k++)
			*(r + k) = *(r + k + 1);
	}
	return (r);
}
