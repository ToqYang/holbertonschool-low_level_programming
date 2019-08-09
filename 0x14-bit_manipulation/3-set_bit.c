#include "holberton.h"

/**
 * set_bit - Set the number bit to 1
 * @n: Set the bit about the index
 * @index: Return the index
 * Return: Integer index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask_num = 1;

	if (index > 63)
		return (-1);

	mask_num <<= index;
	*n |= mask_num;

	return (1);
}
