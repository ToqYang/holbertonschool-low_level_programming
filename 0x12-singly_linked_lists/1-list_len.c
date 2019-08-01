#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Number of linked
 * @h: Pointer to struct
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] %p\n", h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
