#include "holberton.h"

/**
 * print_number - Function prints number
 * @n: Print number
 */

void print_number(int n)
{
	unsigned int i, j, k;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	k = 1;

	while (j > 9)
	{
		j /= 10;
		k *= 10;
	}

	while (k >= 1)
	{
		_putchar(((i / k) % 10) + '0');
		k /= 10;
	}
}
