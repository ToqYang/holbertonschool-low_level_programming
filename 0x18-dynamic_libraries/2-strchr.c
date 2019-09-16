#include "holberton.h"

/**
 * _strchr - Print locate character in a string
 * @s: String of char
 * @c: character
 * Return: a pointer to the first occurrence of the character c in the string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}

	return (0);
}
