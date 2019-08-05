#include "lists.h"

/**
 * listint_len - Print the lenth of a linked list
 * @h: Argument of linked list
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
