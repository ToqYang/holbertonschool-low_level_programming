#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Print the message of function
 * @s: Pointer of a char
 */

void rev_string(char *s)
{
	int j, k, tmp, len = 0;

	while (1)
	{
		if (s[len] == '\0')
			break;
			len++;
	}

	for (j = 0; j < len - 1; j++)
	{
		for (k = j + 1; k > 0; k--)
		{
			tmp = *(s + k);
			*(s + k) = *(s + k - 1);
			*(s + k - 1) = tmp;
		}
	}
}
