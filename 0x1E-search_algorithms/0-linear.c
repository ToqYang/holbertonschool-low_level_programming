#include <stdio.h>

/**
 * linear_search - It search to the number to find
 * @array: (int) Store the numbers
 * @size: (size_t) Store the number of the size of the array
 * @value: Store the value to compare
 * Return: (int) with the index of the position to find
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int index = 0;

	if (array == NULL && size < 1)
		return (-1);

	for (; index < size; index++)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index]);

		if (value == array[index])
			return (index);
	}

	return (-1);
}
