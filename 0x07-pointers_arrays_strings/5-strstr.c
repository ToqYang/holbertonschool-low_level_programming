#include "holberton.h"


/**
 * _strstr - Print locate a substring.
 * @haystack: Store string
 * @needle: Substring needle
 * Return: Null if it not find.
 */
char *_strstr(char *haystack, char *needle)
{
	char *tosearch = haystack;

	while(*haystack != 0)
	{
		tosearch = haystack;

		while (*haystack == *needle && *haystack && *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == 0)
			return (tosearch);

		haystack++;
	}

	return (NULL);
}
