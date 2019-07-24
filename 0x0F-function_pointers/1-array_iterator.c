#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Print the iterator of the array
 * @array: Store the array
 * @size: Store the size of array
 * @action: Function Pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
