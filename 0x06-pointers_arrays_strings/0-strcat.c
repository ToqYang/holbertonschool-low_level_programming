#include "holberton.h"

/**
 * _strcat - Print cat strings
 * @dest: Destination char
 * @src: Source char
 * Return: Message
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i] == 32)
		{
			for (j = 0; src[j] != '\0'; j++)
			{
				dest[i + j + 1] = src[j];
			}
		}
	}
	return (dest);
}
