#include "variadic_functions.h"

/**
 * print_numbers - Print numbers followed new line
 * @separator: String print between numbers
 * @n: Store the size argumenst
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int num;

	num = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);

		printf("%d", num);

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(list);

}
