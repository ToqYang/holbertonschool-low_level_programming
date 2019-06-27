#include "holberton.h"
/**
 * print_line - Print the line
 * @n: Store the limit of lines
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
