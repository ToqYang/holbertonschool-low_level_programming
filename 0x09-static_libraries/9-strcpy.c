#include "holberton.h"

/**
 * _strcpy - Print pointer function
 * @dest: Store the pointer to char
 * @src: Store the pointer to char
 * Return: dest[]
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
