#include "holberton.h"

/**
 * _strncpy - Print concanete strings
 * @dest: Store destination
 * @src: Store source
 * @n: Store the size
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
