#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Print the int index
 * @array: Print the index of the array
 * @size: Store the size of array
 * @cmp: Function pointer compare
 * Return: Integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
			{
				index = i;
				return (index);
			}
		}

		if (i == size)
			return (-1);
	}
	return (-1);
}
