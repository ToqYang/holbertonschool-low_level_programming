#include "holberton.h"
/**
 * print_square - Print the square
 * @size: Store the value of the limit of square
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < size; b++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
