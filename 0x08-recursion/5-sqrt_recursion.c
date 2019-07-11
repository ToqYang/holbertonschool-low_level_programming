#include "holberton.h"

/**
 * _sqrt_recursion - Print square root
 * @n: Number
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (cal_sq_ro(n, 1));
}

/**
 * cal_sq_ro - Iterative function
 * @n: Integer for prove the square root
 * @i: Exponent
 * Return: Square root;
 */

int cal_sq_ro(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (cal_sq_ro(n, i + 1));
	else
		return (-1);
}
