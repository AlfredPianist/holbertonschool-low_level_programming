#include "holberton.h"

/**
 * reverse_array - reverses an array's contents.
 * @a: the source array.
 * @n: the number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int index, curr_int;

	index = 0;

	/*
	 * Exchange each integer from each end of the array,
	 * advancing one position at a time using a temporary int variable
	 * until the middle of the array.
	 */
	for (; index < (n / 2); index++)
	{
		/*
		 * Temporary value set to the one of the current position of
		 * the pointer.
		 */
		curr_int = a[index];
		/*
		 * Set the value of the current position of the pointer to
		 * the value of the integer of the end of the array
		 * depending of the iteration (last integer, next to last, etc).
		 * "- 1" because if not it would take into account the next
		 * address after the last integer (some random value).
		 */
		a[index] = a[(n - 1) - index];
		/* Now swap this last position's integer with curr_int */
		a[(n - 1) - index] = curr_int;
	}
}
