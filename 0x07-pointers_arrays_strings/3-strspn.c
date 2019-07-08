#include "holberton.h"

/**
 * _strspn - Print the prefix sibstring
 * @s: Array source
 * @accept: Array comparate
 * Return: Counter coincidences
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if(s[i] != accept[j])
		{
			break;
		}

	}
	return (i);
}
