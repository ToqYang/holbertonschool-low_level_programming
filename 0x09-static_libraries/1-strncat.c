#include "holberton.h"

/**
 * _strncat - Print concanete strings
 * @dest: Store destination
 * @src: Store source
 * @n: Store the size
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
		while (n > 0)
		{
			dest[i] = src[j];
			i++;
			j++;
			n--;
		}
		dest[i] = 0;
		return (dest);

}
