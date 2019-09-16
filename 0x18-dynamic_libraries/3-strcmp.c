#include "holberton.h"

/**
 * _strcmp - Print compare two strngs
 * @s1: Store s1
 * @s2: Store the s2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
