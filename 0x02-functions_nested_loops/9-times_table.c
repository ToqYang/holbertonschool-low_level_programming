#include "holberton.h"
/**
 * times_table - Print multiplication table
 * Return: Nothing
 */
void times_table(void)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (j * k < 10)
			{
				if (k != 0)
				{
					_putchar (44);
					_putchar (32);
					_putchar (32);
				}
				_putchar ((j * k) % 10 + '0');
			}
			else
			{
				_putchar (44);
				_putchar (32);
				_putchar ((j * k) / 10 + '0');
				_putchar ((j * k) % 10 + '0');
			}
		}
		_putchar(10);
	}
}
