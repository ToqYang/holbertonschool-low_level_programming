#include "holberton.h"

/**
 *_strlen_recursion - Palindrome
 * @s: Lenght string
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * Is_Palindrome_Check - Check if is palindrome
 * @s: String pointer
 * Return: Nothing
 */

int Is_Palindrome_Check(char *s)
{
	int length;

	length = _strlen_recursion(s);
	if (length <= 1)
		return (1);
	return (palindrome(s, length));
}

/**
 * palindrome - Return palindrome
 * @s: String
 * @len: Length
 * Return: Int
 */

int palindrome(char *s, int length)
{
	if (length <= 1)
	{
		return (1);
	}
	else if (*s == *(s + length - 1))
	{
		return (palindrome(s + 1, length - 2));
	}
	else
	{
		return (0);
	}
}
