#include "holberton.h"
/**
 * _isalpha - Check uppercase and lowercase
 * @c: Print the ascii character
 * Return: 1 if is alpha and 0 if there not
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
