#include "holberton.h"
/**
 * puts_half - Print 56789
 * @str: Store the char
 */

void puts_half(char *str)
{
	int count = 0, print;

	while (*(str + count))
		count++;
	if ((count % 2) == 0)
	{
		print = count / 2;
	}
	else
	{
		print = (count + 1) / 2;
	}
	while (*(str + print))
	{
		_putchar(str[print]);
		print++;
	}
	_putchar('\n');
}
