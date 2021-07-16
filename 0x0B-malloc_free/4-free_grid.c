#include <stdlib.h>

/**
 * free_grid - frees space
 * @grid: array to be freed
 * @height: height of the array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
		*(grid + i) = NULL;
	}

	free(grid);
	grid = NULL;
}
