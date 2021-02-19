#include "holberton.h"

/**
 * reverse_string - reverses a string.
 * @s: the string to be reversed.
 * @length: the length of the string.
 */
void reverse_string(char *s, int length)
{
	int index;
	char curr_char;

	for (index = 0; index < (length / 2); index++)
	{
		curr_char = s[index];
		s[index] = s[(length - 1) - index];
		s[(length - 1) - index] = curr_char;
	}
}

/**
 * length_string - returns the length of a string.
 * @s: the string to be calculated.
 *
 * Return: the length of the string.
 */
int length_string(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
		index++;

	return (index - 1);
}

/**
 * *infinite_add - adds two really large numbers.
 * @n1: the first summand string of integers.
 * @n2: the second summand string of integers.
 * @r: the buffer that the function will use to store the result.
 * @size_r: the size of the buffer.
 *
 * Return: a pointer to the buffer with the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l_n1, l_n2, co, dig1, dig2;
	char carry;

	carry = '0';
	l_n1 = length_string(n1);
	l_n2 = length_string(n2);

	for (co = 0; (co <= l_n1 || co <= l_n2)
		     && (size_r - 1 >= l_n1 && size_r - 1 >= l_n2); co++)
	{
		if (co > l_n1)
			dig1 = '0';
		else
			dig1 = n1[l_n1 - co];

		if (co > l_n2)
			dig2 = '0';
		else
			dig2 = n2[l_n2 - co];

		r[co] = ((((dig1 + dig2 + carry) - (3 * '0')) % 10) + '0');
		carry = ((((dig1 + dig2 + carry) - (3 * '0')) / 10) + '0');
	}

	if (size_r <= l_n1 || size_r <= l_n2)
		return (0);

	if (carry != '0')
		r[co] = carry;
	else
		co--;
	r[co + 1] = '\0';

	if (size_r <= co + 1)
		return (0);

	reverse_string(r, co + 1);
	return (r);
}
