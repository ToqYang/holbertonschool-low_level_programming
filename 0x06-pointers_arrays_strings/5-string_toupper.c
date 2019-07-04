#include "holberton.h"

/**
 * string_toupper - Change to upper
 * @n: Store the array char
 * Return: Char
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] -= 32;
	}
	return (n);
}
