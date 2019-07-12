#include "holberton.h"
/**
 * _isupper - Print if is uppercase or not
 * @c: Store the value of the variable in ascii
 * Return: 1 if is uppercase or 0 is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
