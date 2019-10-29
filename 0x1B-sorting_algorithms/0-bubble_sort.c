#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Order the elements through butble sort
 * @array: Array to order
 * @size: Length of the array
 */

void bubble_sort(int *array, size_t size)
{
	int min = 0, sen = 0;

	if (array == NULL || size < 2)
		return;

	/** Value sentinel for know if there swap */
	while (sen != -1)
	{
		/** Assume there not swap */
		sen = -1;

		/** Traversing the array */
		for (size_t j = 0; j < size - 1; ++j)
		{
			/** Verify if the current is greater than the next */
			if (array[j] > array[j + 1])
			{
				/** Store the value next in a temporal */
				min = array[j + 1];
				/** Value next is placed in the current index */
				array[j + 1] = array[j];
				/** Current value swap with the index */
				array[j] = min;
				/** Print the array */
				print_array(array, size);

				/** Equal to sen 1 */
				sen = 1;
			}
		}
	}
}
