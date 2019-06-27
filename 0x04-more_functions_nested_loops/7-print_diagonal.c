#include "holberton.h"
/**
 * print_diagonal - Print the diagonal backslash
 * @n: Store the value of the limit of diagonal
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
		else
		{
			for (a = 0; a < n; a++)
			{
				for (b = 0; b < a; b++)
				{
					_putchar(' ');
				}
				_putchar(92);
				_putchar('\n');
			}
		}
}
