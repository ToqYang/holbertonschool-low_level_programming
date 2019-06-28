#include "holberton.h"
/**
 * print_triangle - print a middle triangle
 * @size: triangle
 */
void print_triangle(int size)
{
	int numtr, space;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (numtr = 0; numtr < size; numtr++)
	{
		for (space = 0; space < size; space++)
		{
			if (space < (size - (numtr + 1)))
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar(10);
	}
}
