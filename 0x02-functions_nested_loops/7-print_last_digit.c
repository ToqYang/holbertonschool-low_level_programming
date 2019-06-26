#include "holberton.h"
/**
 * print_last_digit - Receive x and print x
 * @x: Store the last value
 * Return: y
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x >= 0)
	{
		_putchar(y + '0');
	}

	else
	{
		y *= -1;
		_putchar(y + '0');
	}
		return (y);
}
