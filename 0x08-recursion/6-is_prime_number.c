#include "holberton.h"

/**
 * is_prime_number - Prime number
 * @n: prime number
 * Return: Nothing
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	return (prime(n, 2));
}

/**
 * prime - Check if is prime
 * @n: integer
 * @i: Counter
 * Return: Integer
 */

int prime(int n, int i)
{
	if (i % n == 0)
	{
		return (0);
	}
	else if (n + 1 == i  && i % n != 0)
	{
		return (1);
	}
	return (prime(n + 1, i));
}
