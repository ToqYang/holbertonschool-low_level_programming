#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - Allocate memory
 * @b: Size of b
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	int *mallcheck;

	mallcheck = NULL;

	mallcheck = malloc(b);

	if (mallcheck == NULL)
	{
		exit(98);
	}

	return (mallcheck);
}
