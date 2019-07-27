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
	unsigned int num;

	va_start(list, n);

	if (separator != NULL && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(list, int);

			if (i < (n - 1))
			{
				printf("%d%s", num, separator);
			}

			else
			{
				printf("%d", num);
			}
		}

		printf("\n");
		va_end(list);
	}
}
