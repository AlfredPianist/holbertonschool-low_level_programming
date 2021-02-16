#include "holberton.h"

/**
 * swap_int - swaps the values of two integer type variables.
 * @a: the first integer to be swapped.
 * @b: the second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
