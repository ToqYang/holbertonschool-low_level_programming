#include "holberton.h"
/**
 * print_most_numbers - Not print 2 and 4
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
