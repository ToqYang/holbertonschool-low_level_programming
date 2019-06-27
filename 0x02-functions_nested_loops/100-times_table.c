#include "holberton.h"
/**
 * print_times_table - Table rares
 * @n: iteration :O
 * Return: Nothing
 */
void print_times_table(int n)
{
	int j, k;

	if (n < 16 && n >= 0)
	{
		for (j = 0; j <= n; j++)
		{
			for (k = 0; k <= n; k++)
			{
				if (j * k < 10)
				{
					if (k != 0)
					{
						_putchar (44);
						_putchar (32);
						_putchar (32);
						_putchar (32);
					}
					_putchar ((j * k) % 10 + '0');
				}
				else if (j * k < 100)
				{
					_putchar (44);
					_putchar (32);
					_putchar (32);
					_putchar ((j * k) / 10 + '0');
					_putchar ((j * k) % 10 + '0');
				}
				else
				{
					_putchar (44);
					_putchar (32);
					_putchar ((j * k) / 100 + '0');
					_putchar (((j * k) / 10) % 10 + '0');
					_putchar ((j * k) % 10 + '0');
				}
			}
			_putchar(10);
		}
	}
}
