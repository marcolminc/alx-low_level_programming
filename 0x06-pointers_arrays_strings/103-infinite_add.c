#include <string.h>

/**
 * str_len - computes length of a string
 * @str: the string to mesure
 *
 * Return: the length of the string
 */
int str_len(char *str)
{
	int len;
	
	len = 0;
	while (*(str++) != '\0')
		len++;
	return (len);
}
/**
 * infinite_add - adds large numbers extracted from strings
 * @n1: the string for first number
 * @n2: the string for second number
 * @r: the buffer for the result (sum)
 * @size_r: the size of the result buffer
 * 
 * Return: r if sum fits in it, otherwise 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, max_len, carry, i, j, k, sum;

	len1 = str_len(n1), len2 = str_len(n2);
	max_len = len1 > len2 ? len1: len2;
	if (max_len + 1 >= size_r)
		return 0;
	carry = 0;
	i = len1 - 1, j = len2 - 1, k = max_len;
	r[k + 1] = '\0';
	while (k >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		r[k--] = (sum % 10) + '0';
		carry = sum / 10;
	}
	if (carry > 0)
	{
		if (max_len + 2 > size_r)
			return (0);
		for (k = max_len; k >= 0; k--)
			r[k + 1] = r[k];
		r[0] = carry + '0';
	}
	return (r);
}
