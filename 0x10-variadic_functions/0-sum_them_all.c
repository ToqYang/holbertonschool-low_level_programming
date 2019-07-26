#include "variadic_functions.h"

/**
 * sum_them_all - Print the sum of several arguments
 * @n: Const of size of argv
 * Return: Sum of the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	unsigned int i;
	unsigned int sum;

	sum = 0;

	if (n == 0)
        {
                return (0);
        }

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
