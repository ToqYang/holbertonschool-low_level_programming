#include "lists.h"

/**
 * print_listint - Print a list of all elements
 * @h: Argument of a list
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
