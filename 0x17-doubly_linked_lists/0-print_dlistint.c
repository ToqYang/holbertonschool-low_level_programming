#include "lists.h"

/**
 * print_dlistint - Print the elements and number of elements
 * @h: Receive the direction of the node
 * Return: Counter of the elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		++count;
	}

	return (count);
}
