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

	va_start(list, n);

	if (n > 0 && separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
			{
				printf("%d%s", va_arg(list, int), separator);
			}
			else
			{
				printf("%d\n", va_arg(list, int));
			}
		}
		va_end(list);
	}
}
