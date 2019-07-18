#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - Print the concatenation
 * @s1: String one
 * @s2: String the second about n bytes
 * @n: Store the size of second string
 * Return: Pointer to pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;

	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	dest = malloc((n + i + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		dest[j] = s1[j];

	for (j = 0; j < n; j++)
		dest[j + i] = s2[j];

	dest[i + j + 1] = 0;

	return (dest);
}
