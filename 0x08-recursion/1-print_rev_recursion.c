#include "holberton.h"

/**
 * _puts_recursion - Print the function puts
 * @s: Store the since first character
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
