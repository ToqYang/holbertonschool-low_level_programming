#include "variadic_functions.h"

/**
 * print_strings - Print the dog
 * @separator: Store the string of separator
 * @n: Store the size of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *comp;

	va_start(list, n);

	if (n > 0 && separator)
	{
		for (i = 0; i < n; i++)
		{

			comp = va_arg(list, char *);

			if (comp != NULL)
			{
				printf("%s", comp);
			}
			else
			{
				printf("(nil)");
			}

			if (i < n - 1)
			{
				printf("%s", separator);
			}

		}
		printf("\n");
		va_end(list);
	}

}
