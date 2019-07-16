#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Print the duplicate
 * @str: Store char
 * Return: Pointer
 */

char *_strdup(char *str)
{
	int size, i;
	char *copy;

	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	++size;

	copy = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
