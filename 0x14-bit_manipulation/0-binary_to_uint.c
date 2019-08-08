#include "holberton.h"

/**
 * binary_to_uint - Print binary to int
 * @b: Pointer to char to convert int
 * Return: Unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i, result;

	i = 0;
	result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			result = ((result * 2) + 1);
		}
		else if (b[i] == '0')
		{
			result = (result * 2);
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
