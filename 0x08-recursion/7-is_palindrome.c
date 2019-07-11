#include "holberton.h"

/**
 * _len - Length string
 * @s: Store s
 * Return: Int length
 */
int _length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _length(s + 1));
	}
}

/**
 * _comparation - Print comparation 0-1
 * @s: String 
 * @length: Length
 * @i: Counter
 * Return: Integer 0-1
 */

int _comparation(char *s, int len, int i)
{
	if (*(s + i) == *(s + len - 1 - i) && i == (len / 2))
	{
		return (1);
	}
	else if (*(s + i) != *(s + len - 1 - i))
	{
		return (0);
	}
	else
	{
		return (_comparation(s, len, i + 1));

	}
}

/**
 * is_palindrome - Print palindrome
 * @s: String
 * Return: int if palindrome
 */

int is_palindrome(char *s)
{
	if (_comparation(s, _length(s), 0) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
