#include "holberton.h"

/**
 * flip_bits - Prin the swapping of a number
 * @n: Store the number
 * @m: Store the other number
 * Return: Number to swap the number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter;
	unsigned long int mask;

	counter = 0;
	mask = n ^ m;

	while (mask > 0)
	{
		if (mask & 1)
		{
			counter++;
		}
		mask >>= 1;
	}
	return (counter);
}
