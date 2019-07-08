#include "holberton.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: Store the first segment
 * @accept: Store the second segment
 * Return: Pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; accept[j] != '\0'; j++)
                {
                        if (s[i] == accept[j])
                        {
                                return (s+i);
                        }
                }
        }
        return (0);
}
