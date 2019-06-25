#include "holberton.h"
/**
 * print_last_digit - Receive x and print x
 * @x: Store the last value
 * Return: y
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		y = -x % 10;
	}
	else
	{
		y = x % 10;
	}
	_putchar(y + '0');
		return (y);
}
