#include "holberton.h"
/**
 * _isdigit - Print if is digit
 * @c: Store the value in ascii
 * Return: 1 if is digit and 2 if not is digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
