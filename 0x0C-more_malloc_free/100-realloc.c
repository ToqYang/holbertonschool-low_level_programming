#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - Print the function realloc
 * @ptr: Store the pointer
 * @old_size: Store the old value
 * @new_size: Store the new size
 * Return: Pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size > old_size)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != 0)
		return (NULL);

	return (ptr);
}
