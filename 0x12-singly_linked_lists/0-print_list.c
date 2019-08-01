#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Print list linked
 * @list_t: Const list of a pointer
 * Return: Size_t
 */

size_t print_list(const list_t *h)
{
	unsigned count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] %p\n", h->str);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
