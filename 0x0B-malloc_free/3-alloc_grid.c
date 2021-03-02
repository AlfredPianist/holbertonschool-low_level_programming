#include "holberton.h"

/**
 * alloc_grid - allocates memory for a matrix of width * height.
 * @width: the width of the matrix.
 * @height: the height of the matrix.
 *
 * Return: The pointer to the allocated matrix, or NULL if height or width
 *         is less than 1 or failed to allocate memory.
 */
int **alloc_grid(int width, int height)
{
	int counter_h, counter_w;
	int **grid;

	counter_h = counter_w = 0;
	grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (counter_h = 0; counter_h < height; counter_h++)
	{
		grid[counter_h] = malloc(sizeof(int) * width);

		if (grid[counter_h] == NULL)
		{
			for (counter_h -= 1; counter_h >= 0; counter_h--)
				free(grid[counter_h]);
			free(grid);
			return (NULL);
		}
	}

	for (counter_h = 0; counter_h < height; counter_h++)
		for (counter_w = 0; counter_w < width; counter_w++)
			grid[counter_h][counter_w] = 0;

	return (grid);
}
