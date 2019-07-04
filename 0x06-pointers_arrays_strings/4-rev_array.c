#include "holberton.h"

/**
 * reverse_array - Print the reverse array
 * @a: Store the array of the a
 * @n: Store the size of the array
 */

void reverse_array(int *a, int n)
{
	int s, d = 0;

	n = n - 1;

	while (d < n)
	{
		s = a[d];
		a[d] = a[n];
		a[n] = s;
		d++;
		n--;
	}
}
