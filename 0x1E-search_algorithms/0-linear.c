#include "search_algos.h"

/**
 * linear_search - Search for the first occurrence of a value within an array.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched within the array.
 *
 * Return: The index of the value searched if found. Return -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
