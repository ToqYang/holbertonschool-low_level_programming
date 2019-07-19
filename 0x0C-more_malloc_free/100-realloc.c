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
	void *cpy_allocate;

	unsigned int i;

	if (ptr == NULL)
		cpy_allocate = malloc(new_size);
	if (new_size > old_size)
		cpy_allocate = malloc(new_size);

		if (cpy_allocate == NULL)
			return (NULL);

		for (i = 0; i < old_size; i++)
			cpy_allocate[i] = ptr[i];

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != 0)
		free(ptr);

	free(ptr);
	return (cpy_allocate);
}
