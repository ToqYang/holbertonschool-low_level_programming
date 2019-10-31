#include "sort.h"
/**
 * swap_bubble - function to swap
 *@a: sorted
 *@b: sorted
 */
void swap_bubble(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - function to sort using Lomuto scheme.
 *@array: array to be sorted
 *@size: size array
 *@low: divider
 *@high: divider
 */
int partition(int *array, size_t size, int low, int high)
{
	int *pivot, hig, low1;

	pivot = array + high;
	for (hig = low1 = low; low1 < high; low1++)
	{
		if (array[low1] < *pivot)
		{
			if (hig < low1)
			{
				swap_bubble(array + low1, array + hig);
				print_array(array, size);
			}
			hig++;
		}
	}

	if (array[hig] > *pivot)
	{
		swap_bubble(array + hig, pivot);
		print_array(array, size);
	}
	return (hig);
}

/**
 * partition_sort - recursion function to call partition sort
 *@array: array to be sorted.
 *@size: size of array.
 *@low: divider.
 *@high: divider.
 */
void partition_sort(int *array, size_t size, int low, int high)
{
	int parti;

	if (high - low > 0)
	{
		parti = partition(array, size, low, high);
		partition_sort(array, size, low, parti - 1);
		partition_sort(array, size, parti + 1, high);
	}
}

/**
 * quick_sort - quick sort function for array.
 *@array: array to be sorted.
 *@size: size to be sorted.
 */
void quick_sort(int *array, size_t size)
{
	partition_sort(array, size, 0, size - 1);
}
