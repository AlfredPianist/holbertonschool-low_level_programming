#include "function_pointers.h"

/**
 * array_iterator - executes a function from each of the array's positions
 * @array: The array of numbers to be iterated.
 * @size: The size of the array.
 * @action: The function pointer to print_elem or print_elem_hex.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	counter = 0;
	if (array != NULL && size != 0 && action != NULL)
	for (counter = 0; counter < size; counter++)
		action(array[counter]);
}
