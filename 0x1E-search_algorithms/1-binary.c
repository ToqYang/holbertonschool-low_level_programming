#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - It search to the number to find
 * @array: (int) Store the numbers
 * @size: (size_t) Store the number of the size of the array
 * @value: Store the value to compare
 * Return: (int) with the index of the position to find
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int med = size, left = 0, right = size - 1;

	if (array == NULL && size < 1)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);

		/* Take the size of each stack of arrays */
		med = ((left + right) / 2);

		/* The medium is equal to value */
		if (array[med] == value)
			return (med);
		/** Not look left way if is smaller than value*/
		if (array[med] < value)
			left = med + 1;
		/* If the med is greater than value */
		else
			right = med - 1;
	}

	return (-1);
}

/**
 * print_array - Print a array
 * @array: Store several numbers
 * @start: (int) Introduction to array
 * @end: (int) Ending of the array
 */
void print_array(int *array, unsigned int start, unsigned int end)
{
	while (start <= end)
	{
		if (start == end)
			printf("%d\n", array[start]);
		else
			printf("%d, ", array[start]);
		++start;
	}
}
