#include "function_pointers.h"

/**
 * int_index - searches for an integer given a function pointer's condition.
 * @array: The array of numbers to be iterated.
 * @size: The size of the array.
 * @cmp: The function pointer to be used as condition for returning the index.
 *
 * Return: The index of the array if it exists given the return value of cmp,
 *         or -1 otherwise or if array or cmp are NULL or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	counter = 0;
	while (counter < size)
	{
		if (cmp(array[counter]) != 0)
			return (counter);
		counter++;
	}

	return (-1);
}

