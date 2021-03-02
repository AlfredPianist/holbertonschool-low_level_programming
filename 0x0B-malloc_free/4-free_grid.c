#include "holberton.h"

/**
 * free_grid - frees memory allocated for a matrix of height "height".
 * @grid: The matrix to be cleared.
 * @height: The height of the matrix.
 */
void free_grid(int **grid, int height)
{
	int counter;

	counter = 0;

	for (counter = 0; counter < height; counter++)
		free(grid[counter]);
	free(grid);
}
