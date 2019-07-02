#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - Print the pairs
 * @str: Store the value char
 */

void puts2(char *str)
{
	int i;
	i = 0;

	while (*(str + i))
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
