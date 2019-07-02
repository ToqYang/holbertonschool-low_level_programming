#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - Print the pairs
 * @s: Store the value char
 */

void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] % 2 == 0)
		{
			_putchar(*(s + i));
		}
	}
	_putchar('\n');
}
