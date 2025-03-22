#include "main.h"


/**
 * _strlen - finds length of a string
 * @s: string to measure
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	if (!s || *s == '\0')
		return (len);
	for (; s[len]; len++)
		;
	return (len);
}

/**
 * infinite_add - adds infinite strings of digits
 * @n1: first addend
 * @n2: second addend
 * @r: result buffer
 * @size_r: size of r
 *
 * Return: pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int sum;
	int i, max_size, len1, len2;

	len1 = _strlen(n1), len2 = _strlen(n2);
	max_size = ((len1 > len2) ? len1 : len2) + 1;
	if (max_size + 1 > size_r)
		return (0);
	sum = 0;
	while (*n1 != '\0')
		n1++;
	while (*n2 != '\0')
		n2++;
	n1--, n2--;
	for (i = max_size - 1; i >= 0; i--)
	{
		sum += (*n1 != '\0') ? *n1-- - '0' : 0;
		sum += (*n2 != '\0') ? *n2-- - '0' : 0;
		*(r + i) = (sum % 10) + '0';
		sum /= 10;
	}
	*(r + max_size) = '\0';
	return (r);
}
