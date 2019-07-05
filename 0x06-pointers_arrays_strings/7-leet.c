#include "holberton.h"

/**
 * leet - Encode leet
 * @c: Store encoded
 * Return: char
 */

char *leet(char *c)
{
	int i, j;

	int cara[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int numbers[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == cara[j])
			{
				c[i] = numbers[j];
			}
		}
	}
	return (c);
}
