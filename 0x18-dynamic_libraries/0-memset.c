#include "holberton.h"

/**
 * _memset - Print the fields of memory with a constant
 * @s: Array of char
 * @b: constant b
 * @n: bytes of the memory area pointed to by s
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
