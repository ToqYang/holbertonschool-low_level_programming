#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: pointer to elements
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t min;
	int tmp;
	int flag;

	if (!array)
		return;
	while (flag != -1)
	{
		flag = -1;
		for (i = 0; i < size - 1; i++)
		{
			min = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[min] > array[j])
				{
					min = j;
				}
			}
			if (min != i)
			{
				tmp = array[min];
				array[min] = array[i];
				array[i] = tmp;
				flag = 1;
				print_array(array, size);
			}
		}
	}
}
