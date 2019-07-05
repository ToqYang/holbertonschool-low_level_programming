#include "holberton.h"

/**
 * cap_string - Cap words
 * @c: Store the array
 * Return: array
 */

char *cap_string(char *c)
{
	int i, j;
	char g[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((c[i] == g[j]) && c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] -= 32;

			if (c[0] >= 'a' && c[0] <= 'z')
				c[0] -= 32;
		}
	}

	return (c);
}
