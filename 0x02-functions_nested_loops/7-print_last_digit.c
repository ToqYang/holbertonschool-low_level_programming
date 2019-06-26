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
		_putchar('0' + y);
	}
	else
	{
		y *= -1;
		_putchar('0' + y);
	}
		return (y);
}
