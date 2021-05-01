#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - Function that figures if a given number is palindromic.
 * @num: The number to be calculated.
 *
 * Result: 1 if palindromic, 0 otherwise.
 */
int is_palindrome(unsigned int num)
{
	unsigned int rev_num, i;

	rev_num = 0;
	for (i = num; i != 0; i /= 10)
		rev_num = (rev_num * 10) + (i % 10);

	if (num == rev_num)
		return (1);
	return (0);
}

/**
 * main - Program that calculates the largest palindrome of a product
 *        of 3 numbers.
 *
 * Result: 0 (Success).
 */
int main(void)
{
	unsigned int n1, n2, res;

	n1 = n2 = 999;
	for (; n1 >= 100; n1--)
	{
		for (; n2 >= 100; n2--)
			if (is_palindrome(n1 * n2))
				res = (n1 * n2) >= res ? (n1 * n2) : res;
		n2 = 999;
	}

	printf("Largest palindrome is: %d\n", res);

	exit(EXIT_SUCCESS);
}
