#include "variadic_functions.h"

/**
 * sum_them_all - sums a variable number of terms
 * @n: The number of terms to be added.
 *
 * Return: the sum of said terms.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter;
	int sum;
	va_list terms;

	if (n == 0)
		return (0);

	counter = sum = 0;

	va_start(terms, n);
	while (counter < n)
	{
		sum += va_arg(terms, int);
		counter++;
	}
	va_end(terms);

	return (sum);
}
