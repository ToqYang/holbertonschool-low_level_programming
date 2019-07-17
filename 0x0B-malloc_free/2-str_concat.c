#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - Print the concatenation
 * @s1: Ptr first word
 * @s2: Ptr second word
 * Return: Ptr char
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, k;

	if (!s1)
		s1 = ("");
	if (!s2)
		s2 = ("");
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		concat[k] = s1[k];

	for (k = 0; k < j; k++)
		concat[k + i] = s2[k];

	concat[k + i] = 0;

	return (concat);
}
