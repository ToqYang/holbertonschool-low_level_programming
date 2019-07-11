#include "holberton.h"

/**
 * _check - Check if is prime
 * @a: Number one
 * @b: Iterations
 * Return: 1 prime 0 Not prime
 */

int _Check_Prime(int a, int b)
{
	if ((a % b == 0) && (a == b))
	{
		return (1);
	}
	else if ((a % b == 0) && (b < a))
	{
		return (0);
	}
	return (_Check_Prime(a, b + 1));
}

/**
 * is_prime_number - Print the prime number
 * @n: Store for test if is prime
 * Return: Integer
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n <= 0)
	{
		return (0);
	}
	return (_Check_Prime(n, 2));
}
