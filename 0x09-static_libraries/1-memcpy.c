#include "holberton.h"

/**
 * _memcpy - Print the copies memory area
 * @dest: Destination
 * @src: Source
 * @n: bytes from memory are src
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
