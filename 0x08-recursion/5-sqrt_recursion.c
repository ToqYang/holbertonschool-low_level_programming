#include "holberton.h"

/**
 * _func - Print square root
 * @a: Store the first number
 * @b: ..  .. .. second number
 * Return: int
 */

int _func(int a, int b)
{
	if ((b * b) == a)
	{
		return (b);
	}
	else if ((b * b) < a)
	{
		return (_func(a, b + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Verify square root
 * @n: Store number
 * Return: Integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
		return (_func(n, 2));
}
