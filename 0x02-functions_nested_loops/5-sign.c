#include "holberton.h"
/**
 * print_sign - print the sign of the number
 * @n: Ascii character in int
 * Return: Print 1 if +, 0 for == 0, -1 for -
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}

	_putchar(10);

}
