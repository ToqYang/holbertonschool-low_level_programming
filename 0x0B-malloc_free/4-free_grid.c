#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Free two dimensions
 * @grid: Array multidimnesional
 * @height: Store Height
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
