#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - Print 56789
 * @str: Store the char
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	len = (i / 2);

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
