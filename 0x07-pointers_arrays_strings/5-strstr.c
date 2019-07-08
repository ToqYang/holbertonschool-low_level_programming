#include "holberton.h"

/**
 * _strstr - Print locate a substring.
 * @haystack: Store string
 * @needle: Substring needle
 * Return: Null if it not find.
 */

char *_strstr(char *haystack, char *needle)
{
		int i;

		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[i])
			{
				return (needle);
			}
		}
		return (0);
}
