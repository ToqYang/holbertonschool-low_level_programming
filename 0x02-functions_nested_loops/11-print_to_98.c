#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: any number
 */
void print_to_98(int h)
{
	while (h < 98)
	{
		printf("%d, ", h);
		h++;
	}
	while (h > 98)
	{
		printf("%d, ", h);
		h--;
	}
	if (h == 98)
	{
		printf("%d\n", h);
	}

}
