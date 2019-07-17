#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - Alloc matrix.
 * @width: Store the rows
 * @height: Store the height
 * Return: Ptr int
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;

	return (matrix);
}
