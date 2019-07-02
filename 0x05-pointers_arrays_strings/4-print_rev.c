#include "holberton.h"

/**
 * _puts - Print the message of function
 * @str: Pointer of a char
 */

void print_rev(char *s)
{
        int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	while (i--)
	{
		_putchar(s[i]);
	}
         _putchar('\n');
}
