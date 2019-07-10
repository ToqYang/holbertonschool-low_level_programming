#include "holberton.h"

/**
 * factorial - Print the number factorial
 * @n: Number fatorial
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
