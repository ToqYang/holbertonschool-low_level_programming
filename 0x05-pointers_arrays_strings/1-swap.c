#include "holberton.h"

/**
 * swap_int - Print the change of int
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
