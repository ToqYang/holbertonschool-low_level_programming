#include "holberton.h"
/**
 * _abs - Print the absolute number
 * @a: Receives the number
 * Return: Print a
 */
int _abs(int a)
{
	if (a >= 0)
	{
		a *= 1;
	}
	else
	{
		a *= -1;
	}
	return (a);
}
