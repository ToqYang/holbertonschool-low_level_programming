#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Print allocate memory
 * @nmemb: Store size
 * @size: Store the data size
 * Return: Ptr to Ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *memset;
	unsigned int i;


	if (nmemb == 0 || size == 0)
		return (NULL);

	memset = malloc(nmemb * size);

	if (memset == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		memset[i] = 0;
	}

	return (memset);
}
