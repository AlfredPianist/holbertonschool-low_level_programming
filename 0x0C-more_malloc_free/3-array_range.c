#include "holberton.h"

/**
 * array_range - allocates memory for an array of numbers from min to max.
 * @min: The first number.
 * @max: The last number.
 *
 * Return: A pointer to the array if successful at allocating memory.
 *         Returns NULL otherwise of if min > max.
 */
int *array_range(int min, int max)
{
	int *array;
	int counter;

	array = NULL;
	counter = 0;

	if (min > max)
		return (NULL);

	for (counter = 0; counter <= max - min; counter++)
		;

	array = malloc(sizeof(*array) * counter);
	if (array == NULL)
		return (NULL);

	for (counter = 0; counter <= max - min; counter++)
		array[counter] = counter + min;
	return (array);
}
