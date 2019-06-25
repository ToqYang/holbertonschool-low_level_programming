#include "holberton.h"

void times_table(void)
{
	int j, k, total;
	total = 0;
	for (j = 0; j < 11; j++)
	{
		
		for (k = 0; k < 11; k++)
		{
			total = k * j;
			_putchar(total + '0');
			_putchar(10);
		}
	}
}
