#include "holberton.h"
/**
 * _islower - print lowercase
 * @c: print the ascci characters
 * Return: 0 print Success, 1 print error
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
