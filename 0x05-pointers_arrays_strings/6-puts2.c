#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - Print the pairs
 * @s: Store the value char
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
