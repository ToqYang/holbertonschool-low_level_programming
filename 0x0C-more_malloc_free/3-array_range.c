#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - Print the address min-max
 * @min: Store minimum
 * @max: Store maximum
 * Return: Ptr
 */

int *array_range(int min, int max)
{
	int *range;
	int i;

	if (min > max)
		return (NULL);

	range = malloc((max - min + 1) * sizeof(int));

	if (range == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		range[i] = min + i;
	}

	return (range);
}
