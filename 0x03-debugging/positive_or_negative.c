#include <stdio.h>

/**
 * positive_or_negative - prints if a number is positive, negative or zero.
 * @n: the integer to be found if it is positive, negative or zero.
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
